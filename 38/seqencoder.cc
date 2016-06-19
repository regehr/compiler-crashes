/* (C) 2000, 2001, 2005, 2006 Andrew Stevens 
 *  This file is free software; you can redistribute it
 *  and/or modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2 of
 *  the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 */
/*
 * Disclaimer of Warranty
 *
 * These software programs are available to the user without any license fee or
 * royalty on an "as is" basis.  The MPEG Software Simulation Group disclaims
 * any and all warranties, whether express, implied, or statuary, including any
 * implied warranties or merchantability or of fitness for a particular
 * purpose.  In no event shall the copyright-holder be liable for any
 * incidental, punitive, or consequential damages of any kind whatsoever
 * arising from the use of these programs.
 *
 * This disclaimer of warranty extends to the user of these programs and user's
 * customers, employees, agents, transferees, successors, and assigns.
 *
 * The MPEG Software Simulation Group does not represent or warrant that the
 * programs furnished hereunder are free of infringement of any third-party
 * patents.
 *
 * Commercial implementations of MPEG-1 and MPEG-2 video, including shareware,
 * are subject to royalty fees to patent holders.  Many of these patents are
 * general enough such that they are unavoidable regardless of implementation
 * design.
 *
 */

#include "config.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <cassert>
#include "mjpeg_types.h"
#include "mjpeg_logging.h"
#include "mpeg2syntaxcodes.h"
#include "mpeg2encoder.hh"
#include "elemstrmwriter.hh"
#include "picturereader.hh"
#include "seqencoder.hh"
#include "ratectl.hh"
#include "tables.h"
#include "channel.hh"


// --------------------------------------------------------------------------------
//  Striped Encoding Job parallel despatch classes
//

// Selection of the way macro blocks are distributed between
// threads.
//
// STRIPED ensures each job processes macroblocks in encoding order 
// This is useful for parallelising threads generating output.
// INTERLEAVED ensures shared caches enjoy reasonable locality of reference.
//



struct EncoderJob
{
    enum JobPattern { ENCODE_ORDER, INTERLEAVED };
    
    EncoderJob() : shutdown( false ),working(false) {}
    void (MacroBlock::*encodingFunc)(); 
    Picture         *picture;
    JobPattern      pattern; 
    unsigned int    stripe;
    bool            shutdown;
    volatile bool   working;
};

class ShutdownJob : public EncoderJob
{
public:
    ShutdownJob()
        {
            shutdown = true;
        }
};



class Despatcher
{
public:
    Despatcher();
    ~Despatcher();
    void Init( unsigned int parallelism );
    void Despatch( Picture &picture, void (MacroBlock::*encodingFunc)(),
                   EncoderJob::JobPattern pattern = EncoderJob::INTERLEAVED );
    void ParallelWorker();
    void WaitForCompletion();
private:
    static void *ParallelPerformWrapper(void *despatcher);

    unsigned int parallelism;
    
    Channel<EncoderJob *> jobstodo;	
    vector<EncoderJob>    jobpool;
    pthread_t *worker_threads;
};

Despatcher::Despatcher() :
    worker_threads(0)
{}

void Despatcher::Init( unsigned int _parallelism )

{
    parallelism = _parallelism;
    mjpeg_debug( "PAR = %d\n", parallelism );
    if( parallelism > 0 )
    {
        jobpool.resize(parallelism);
        pthread_attr_t *pattr = 0;
        EncoderJob job;
        /* For some Unixen we get a ridiculously small default stack size.
           Hence we need to beef this up if we can.
        */
#ifdef HAVE_PTHREADSTACKSIZE
#define MINSTACKSIZE 200000

        pthread_attr_t attr;
        size_t stacksize;

        pthread_attr_init(&attr);
        pthread_attr_getstacksize(&attr, &stacksize);

        if (stacksize < MINSTACKSIZE)
        {
            pthread_attr_setstacksize(&attr, MINSTACKSIZE);
        }

        pattr = &attr;
#endif
        worker_threads = new pthread_t[parallelism];
        for( unsigned int i = 0; i < parallelism; ++i )
        {
            jobpool[i].working = false;
            jobpool[i].stripe = i;
            mjpeg_debug("Creating worker thread %d", i );
            if( pthread_create( &worker_threads[i], pattr,
                                &Despatcher::ParallelPerformWrapper,
                                this ) != 0 )
            {
                mjpeg_error_exit1( "worker thread creation failed: %s", strerror(errno) );
            }
        }
    }
}

Despatcher::~Despatcher()
{
    if( worker_threads != 0 )
    {
        WaitForCompletion();
        unsigned int i;
        ShutdownJob shutdownjob;

        for( i = 0; i < parallelism; ++i )
        {
            jobstodo.Put( &shutdownjob );
        }
        for( i = 0; i < parallelism; ++i )
        {
            pthread_join( worker_threads[i], NULL );
        }
        delete [] worker_threads;
    }
}

void *Despatcher::ParallelPerformWrapper(void *despatcher)
{
    static_cast<Despatcher *>(despatcher)->ParallelWorker();
    return 0;
}

void Despatcher::ParallelWorker()
{
	EncoderJob *job;
	mjpeg_debug( "Worker thread started" );
    pthread_setcanceltype( PTHREAD_CANCEL_ASYNCHRONOUS, NULL );

	for(;;)
	{
        // Get Job to do and do it!!
     mjpeg_debug( "Worker: getting" );
      
        jobstodo.Get( job );
        if( job->shutdown )
        {
            mjpeg_debug("SHUTDOWN worker" );
            pthread_exit( 0 );
        }
        mjpeg_debug( "Working: stripe %d/%d %d", job->stripe, parallelism, job->pattern );
        Picture *picture = job->picture;
        vector<MacroBlock>::iterator macroblocks_begin;
        vector<MacroBlock>::iterator macroblocks_end;
        switch( picture->pict_struct )
        {
            case FRAME_PICTURE :
                macroblocks_begin = picture->mbinfo.begin();
                macroblocks_end = picture->mbinfo.end();
                break;
            case TOP_FIELD :
                macroblocks_begin = picture->mbinfo.begin();
                macroblocks_end = picture->mbinfo.begin() + picture->mbinfo.size()/2;
                break;
            case BOTTOM_FIELD :
                macroblocks_begin = picture->mbinfo.begin() + picture->mbinfo.size()/2;
                macroblocks_end = picture->mbinfo.end();
                break;
        }
        
        int macroblocks = macroblocks_end-macroblocks_begin;

        vector<MacroBlock>::iterator stripe_begin;
        vector<MacroBlock>::iterator stripe_end;
        vector<MacroBlock>::iterator mbi;
        int                          stripe_step;
        
        switch( job->pattern )
        {
            case EncoderJob::ENCODE_ORDER :
                stripe_step = 1;
                stripe_begin = macroblocks_begin + job->stripe* macroblocks/parallelism;
                stripe_end = macroblocks_begin + (job->stripe+1)* macroblocks/parallelism;
                break;
            default :
            case EncoderJob::INTERLEAVED :
                stripe_step = parallelism;
                stripe_begin = macroblocks_begin+job->stripe;
                stripe_end = macroblocks_end;
                break;
        }
        
        for( mbi = stripe_begin; mbi < stripe_end; mbi += stripe_step )
        {
            (*mbi.*job->encodingFunc)();
        }
        mjpeg_debug( "Worker: stripe %d done", job->stripe );
        job->working = false;
    }
}

void Despatcher::Despatch(  Picture &picture,
                            void (MacroBlock::*encodingFunc)(),
                            EncoderJob::JobPattern pattern 
                         )
{
    if( parallelism > 0 )
    {
        for( unsigned int stripe = 0; stripe < parallelism; ++stripe )
        {
            EncoderJob *job = &jobpool[stripe];
            // We guanratee a previously despatched stripe has completed before it is redespatched
            while( job->working )
            {
                jobstodo.WaitForNewConsumers();
            }

            job->working = true;
            job->pattern = pattern;
            job->encodingFunc = encodingFunc;
            job->picture = &picture;
            jobstodo.Put( job );
        }
    }
    else
    {
        vector<MacroBlock>::iterator mbi;
        for( mbi = picture.mbinfo.begin(); mbi < picture.mbinfo.end(); ++mbi )
        {
            (*mbi.*encodingFunc)();
        }
    }
}

void Despatcher::WaitForCompletion()
{
    //
    // We know all despatched jobs have completed if the entire
    // pool of worker threads is waiting on the job despatch
    // channel
    //
    if( parallelism > 0 )
    {
        jobstodo.WaitUntilConsumersWaitingAtLeast( parallelism );
    }
}






// --------------------------------------------------------------------------------
//  Sequence Encoder top-level clapass1_ss.
//



SeqEncoder::SeqEncoder( EncoderParams &_encparams,
                        PictureReader &_reader,
                        Quantizer &_quantizer,
                        ElemStrmWriter &_writer,
                        Pass1RateCtl    &_p1ratectl,
                        Pass2RateCtl   &_p2ratectl
                       ) :
    encparams( _encparams ),
    reader( _reader ),
    quantizer( _quantizer ),
    writer( _writer ),
    pass1ratectl( _p1ratectl ),
    pass2ratectl( _p2ratectl ),
    p1_despatcher( *new Despatcher ),
    pass1_rcstate( pass1ratectl.NewState() ),
    pass1_ss( _encparams, _reader )
{
}

SeqEncoder::~SeqEncoder()
{
    delete &p1_despatcher;
}


/*********************
 *
 * Init - Setup encoder once parameters have been set
 *
 ********************/
 
void SeqEncoder::Init()
{

    //
    // Setup the parallel job despatcher...
    //
    p1_despatcher.Init( encparams.encoding_parallelism );

    pass1ratectl.Init();
    pass2ratectl.Init();
    pass1_ss.Init(  );
    old_ref_picture = 0;

    // Lots of routines assume (for speed) that
    // a dummy ref picture is provided even if it is not needed
    // because the picture being encoded is  INTRA
    new_ref_picture = GetFreshPicture();
    free_pictures.push_back( new_ref_picture );

    released_ref_frames = 0;
}



/*
 *
 * Generate a new encoding of a picture using the specified rate controller.
 *
 * @params encodingFunc generates the macro-block DCTs from the (reconstructed)
 * image data.  Depending on the context it may/may not also perform fresh
 * motion estimation and compensation.
 *
 */


void SeqEncoder::EncodePicture( Picture &picture,
                                RateCtl &ratecontrol)
{
    mjpeg_debug("Start  %d %c(%s) %d %d",
                picture.decode, 
                pict_type_char[picture.pict_type],
                picture.pict_struct == FRAME_PICTURE
                ? "prg"
                : ( (picture.pict_struct == TOP_FIELD) ? "top" : "bot"),
                picture.temp_ref,
                picture.present);

    p1_despatcher.Despatch( picture, &MacroBlock::Encode );
    p1_despatcher.WaitForCompletion();

    int padding_needed;
    picture.PutHeaders();

    picture.QuantiseAndCode(ratecontrol);
    ratecontrol.PictUpdate( picture, padding_needed);
    picture.PutTrailers(padding_needed);

    picture.Reconstruct();

}




/*
 *
 * Retain an existing encoding of a picture using the specified rate controller.
 *
 * When we retain the encoding of a picture we need to set and update
 * the rate-controller for the picture so it can update its internal
 * bit-allocation model based on the retained encoding.
 *
 */

void SeqEncoder::RetainPicture( Picture &picture, RateCtl &ratecontrol)
{
    mjpeg_debug("Retain %d %c(%s) %d %d",
                picture.decode, 
                pict_type_char[picture.pict_type],
                picture.pict_struct == FRAME_PICTURE
                ? "prg"
                : ( (picture.pict_struct == TOP_FIELD) ? "top" : "bot"),
                picture.temp_ref,
                picture.present);
      // Even ff we don't re-encode we need to update the rate controller
      //to take into account the encoding we a 'recycling'
      int dummy;
      pass2ratectl.PictUpdate( picture, dummy );
}

void SeqEncoder::EncodeStreamOneStep()
{
	// For now we simply round-robin schedule the
	// various passes.  Later - they get split into
	// seperate processes/threads!!
	if( !pass1_ss.EndOfStream() )
	{
		Pass1Process();
		//
		// TODO Sequence splitting really needs to be done in pass-2
		//  HOwever, the would entail changing GOP structure :-(
		//  in <pass2-ratectl>::GopSetup....
		pass1_ss.Next( BitsAfterMux() );
	}
    
	if( pass2queue.size() > 0 )
	{
		Pass2Process();
	}
}

bool SeqEncoder::EncodeStreamWhile()
{
	return (pass1coded.size() > 0 || pass2queue.size() > 0);
}


/*********************
 *
 * EncodeStream - Where it all happens.  This is the top-level loop
 * that despatches all the encoding work.  Encoding is always performed
 * two-papass1_ss. 
 * Pass 1: a first encoding that determines the GOP
 * structure, but may only do rough-and-ready bit allocation that is
 * visually sub-optimal and/or may violate the specified maximum bit-rate.
 * 
 * Pass 2: Pictures from Pass1 are, if necessary, re-quantised and the results
 * coded to accurate achieve good bit-allocation and satisfy bit-rate limits.
 * 
 * In 'single-pass mode' pass 2 re-encodes only if it 'has to'.
 * In 'look-ahead mode' pass 2 always re-encodes.
 * In 'Pass 1 of two-pass mode' Pass-2 simply dumps frame complexity and motion
 * estimation data from Pass-1.
 * In 'Pass 2 of two-pass mode' Pass-1 rebuilds frames based on ME and complexity
 * data from  a 'Pass 1 of two-pass mode' run and Pass-2 does some final optimisation.
 *
 * N.b. almost all the interesting stuff occurs in the Pass1 encoding. If selected:
 * - A GOP may be low-passed and re-encoded if it looks like excessive quantisation 
 * is needed. 
 * - GOP length is determined (P frames with mostly intra-coded blocks are turned
 * into I-frames.
 *
 * NOTE: Eventually there will be support for Pass2 to occur in seperate threads...
 * 
 ********************/
 
void SeqEncoder::EncodeStream()
{
    //
    // Repeated calls to TransformFrame build up the queue of
    // Encoded with quantisation controlled by the
    // pass1 rate controller.
    do 
    {
    	EncodeStreamOneStep();
    } while( EncodeStreamWhile() );

    StreamEnd();
}


Picture *SeqEncoder::GetFreshPicture()
{
    Picture *fresh;
    if( free_pictures.size() == 0 )
        fresh = new Picture(encparams,  writer , quantizer);
    else
    {
        fresh = free_pictures.back();
        free_pictures.pop_back();
    }
    return fresh;
}


void SeqEncoder::ReleasePicture( Picture *picture )
{
    // We don't want to free up Picture objects for re-use
    // until we're sure the encoded picture can no longer
    // be used as a referenced image when encoding later
    // pictures.  So we queue possibly referenced Picture's
    // until at least *2* newer reference Frame's have been
    // released.

    if( picture->FinalFieldOfRefFrame() )
    {
        ++released_ref_frames;
        released_pictures.push_back( picture );
        if( released_ref_frames > 2 )
        {
            Picture *nolonger_refd;
            do
            {
                nolonger_refd = released_pictures.front();
                released_pictures.pop_front();
                if( nolonger_refd->finalfield )
                    reader.ReleaseFrame( nolonger_refd->present );
                free_pictures.push_back( nolonger_refd );
            }
            while( !nolonger_refd->FinalFieldOfRefFrame() );
        }
    }
    else
    {
        released_pictures.push_back( picture );
    }
}



/*
    Encode a picture from scratch: motion estimate relative to the reference
    frames (if any), encode the resulting macro  block image data
    using the best motion estimate available and buffer the result.
*/

void SeqEncoder::Pass1EncodePicture(Picture &picture, int field)
{
    // Checkpoint rate-control parameters in case GOP re-structuring
    // requires a re-encoding.
    pass1_rcstate->Set( pass1ratectl.GetState() );

    // Set up picture parameters
    picture.SetFrameParams( pass1_ss, field );

    // Motion estimation 
    picture.MotionSubSampledLum();

    p1_despatcher.Despatch( picture, &MacroBlock::MotionEstimateAndModeSelect );
    p1_despatcher.WaitForCompletion();


    // Set preliminary GOP structure
    if( pass1_ss.g_idx == 0 )
      pass1ratectl.GopSetup( pass1_ss.np, pass1_ss.nb );

    // Setup rate control
    pass1ratectl.PictSetup(picture);

    // Reconstruct, transform, and encode
    EncodePicture( picture, pass1ratectl);


    mjpeg_info("Enc1  %5d %5d(%2d) %c q=%3.2f %s [%.0f%% Intra]",
               picture.decode, 
               picture.present,
               picture.temp_ref,
               pict_type_char[pass1_ss.frame_type],
               picture.ABQ,
               picture.pad ? "PAD" : "   ",
               picture.IntraCodedBlocks() * 100.0
        );
            
}

/*
    Re-Encode a picture after type or parameters have been revised
    from scratch.
    N.b. this means motion estimation is *RE-DONE* as it is only.


*/

void SeqEncoder::Pass1ReEncodePicture0(Picture &picture, void (MacroBlock::*modeMotionAdjustFunc)())
{
    // Flush any previous encoding
    picture.DiscardCoding();

    // Reset rate controller to undo effect of previous encoding
    pass1ratectl.SetState( pass1_rcstate->Get() );

    // Setup picture to reflect possibly adjusted sequence structure
    picture.SetFrameParams( pass1_ss, 0 );


    // Adjust/ or recompute motion estimation and the corresponding coding
    // mode select


    p1_despatcher.Despatch( picture, modeMotionAdjustFunc );
    p1_despatcher.WaitForCompletion();


    // Set new GOP structure (if any)
    if( pass1_ss.g_idx == 0 )
      pass1ratectl.GopSetup( pass1_ss.np, pass1_ss.nb );

    // Setup rate control
    pass1ratectl.PictSetup(picture);

    // We need to re-run motion estimation here as we may have changed the
    // GOP structure
    EncodePicture( picture, pass1ratectl);
    mjpeg_info("Renc1 %5d %5d(%2d) %c q=%3.2f %s",
               picture.decode, 
               picture.present,
               picture.temp_ref,
               pict_type_char[pass1_ss.frame_type],
               picture.AQ,
               picture.pad ? "PAD" : "   ");

}



Picture *SeqEncoder::NextFramePicture0()
{
    
    Picture *frame_pic;

    if ( pass1_ss.b_idx == 0 ) // I or P Frame (First frame in B-group)
    {
        old_ref_picture = new_ref_picture;
        new_ref_picture = frame_pic = GetFreshPicture();
        frame_pic->fwd_org = old_ref_picture->org_img;
        frame_pic->fwd_rec = old_ref_picture->rec_img;
        frame_pic->fwd_ref_frame = old_ref_picture;
        frame_pic->bwd_ref_frame = 0;
    }
    else // B Frame
    {
        frame_pic = GetFreshPicture();
        frame_pic->fwd_org = old_ref_picture->org_img;
        frame_pic->fwd_rec = old_ref_picture->rec_img;
        frame_pic->bwd_org = new_ref_picture->org_img;
        frame_pic->bwd_rec = new_ref_picture->rec_img;
        frame_pic->fwd_ref_frame = old_ref_picture;
        frame_pic->bwd_ref_frame = new_ref_picture;
    }

   // Frames are presented at input in playback (presentation) order
    frame_pic->org_img = reader.ReadFrame( pass1_ss.PresentationNum() );
    return frame_pic;
}

Picture *SeqEncoder::NextFramePicture1(Picture *frame_pic0)
{
  Picture *frame_pic1;
  frame_pic1 = GetFreshPicture();
  frame_pic1->fwd_org = frame_pic0->fwd_org;
  frame_pic1->fwd_rec = frame_pic0->fwd_rec;
  frame_pic1->bwd_org = frame_pic0->bwd_org;
  frame_pic1->bwd_rec = frame_pic0->bwd_rec;
  frame_pic1->fwd_ref_frame = frame_pic0->fwd_ref_frame;
  frame_pic1->bwd_ref_frame = frame_pic0->bwd_ref_frame;
  frame_pic1->org_img = frame_pic0->org_img;
  return frame_pic1;
}

void SeqEncoder::Pass1GopSplitting( Picture &picture)
{

    assert( ! picture.secondfield );
    // Should this P frame really have been an I-frame ?
    if( pass1_ss.b_idx ==0 &&  picture.IntraCodedBlocks() > 0.6 && pass1_ss.CanSplitHere() )
    {

        int old_present = picture.present;
        if( (!pass1_ss.NextGopClosed() || pass1_ss.BGroupLength() == 1) )
        {
            mjpeg_debug( "GOP split point found here... %d %d %.0f%% intra coded",
                        pass1_ss.NextGopClosed(), pass1_ss.BGroupLength(),
                        picture.IntraCodedBlocks() * 100.0 );
            pass1_ss.ForceIFrame();
            assert( picture.present == old_present);
            Pass1ReEncodePicture0( picture, &MacroBlock::ForceIFrame );
        }
        else if( encparams.M_min == 1 )
        {
            // Next GOP is closed - and B-frames.  We can't just turn the P into an I
            // as the first of the next GOP frame would then be the first B frame and not
            // the current P frame.
            // Solution: we need to back up and code the remainder of the GOP without
            // B frames to allow the I frame to be inserted at the right spot.
            mjpeg_debug( "GOP split forces P-frames only... %.0f%% intra coded", 
                        picture.IntraCodedBlocks() * 100.0 );
            pass1_ss.SuppressBFrames();
            picture.org_img = reader.ReadFrame( pass1_ss.PresentationNum() );
            Pass1ReEncodePicture0( picture,  &MacroBlock::MotionEstimateAndModeSelect );
        }
    }
}


/*********************
 *
 * Pass1Process - Do a unit of work in building up a queue of
 * Pass-1 encoded frame's.
 *
 * A Frame is encoded based on a normal (maximum) length GOP with quantisation
 * determined by Pass1 rate controller.
 * 
 * If the Frame is a P-frame and is almost entirely intra-coded the picture is
 * converted to an I-frame and the current GOP ended early.
 *
 * Once a GOP is succesfully completed its Picture's are transferred to the
 * pass2queue for Pass-2 encoding.
 *
 *********************/
 

void SeqEncoder::Pass1Process()
{
    Picture *frame_pic[2], *last_pic;
    frame_pic[0] = NextFramePicture0();
    Pass1EncodePicture( *frame_pic[0], 0 );
    Pass1GopSplitting( *frame_pic[0] );
    pass1coded.push_back( frame_pic[0] );

    if( encparams.fieldpic )
    {
      frame_pic[1] = NextFramePicture1( frame_pic[0] );
      Pass1EncodePicture( *frame_pic[1], 1 );
      pass1coded.push_back( frame_pic[1] );
      last_pic = frame_pic[1];
    }
    else
    {
      last_pic = frame_pic[0];
    }


    // Find pictures that can now safely be pass 2 encoded
    unsigned int to_queue = 0;
    unsigned int i;

    if( last_pic->end_seq )
    {
        mjpeg_info( "Sequence end reached");
        // If end of sequence we flush everything as next GOP won't refer to this frame
        to_queue = pass1coded.size();
    }
    else if( pass1_ss.b_idx == 0  )    // I or P Frame (First frame in B-group)
    {
        // We have a new fwd reference picture: anything decoded before
        // will no longer be referenced and can be passed on.
        for( i = 0; i < pass1coded.size();  ++i )
        {
            if( pass1coded[i] == old_ref_picture) 
                break;
        }
        to_queue = i == pass1coded.size() ? 0 : i;
    }

    // Queue pass-2 codable pictures for pass-2 coding,
    for( i = 0; i < to_queue; ++i )
    {
        pass2queue.push_back( pass1coded.front() );
        pass1coded.pop_front();
    }

}

/*********************
*
*   BitsAfterMux    -   Estimate the size of the multiplexed stream based
*                   on video stream size and estimate overheads for other
*                   components
*
*********************/

uint64_t    SeqEncoder::BitsAfterMux() const
{
    double frame_periods;
    uint64_t bits_after_mux;
    if( encparams.pulldown_32 )
        frame_periods = (double)pass1_ss.DecodeNum()*(5.0/4.0);
    else
        frame_periods = (double)pass1_ss.DecodeNum();
    //
    //    For VBR we estimate total bits based on actual stream size and
    //    an estimate for the other streams based on time.
    //    For CBR we do *both* based on time to account for padding during
    //    muxing.
    
    if( encparams.quant_floor > 0.0 )       // VBR
        bits_after_mux = 
            writer.BitCount() +  (uint64_t)((frame_periods / encparams.frame_rate) * encparams.nonvid_bit_rate);
    else                                    // CBR
        bits_after_mux = 
            (uint64_t)((frame_periods / encparams.frame_rate) * (encparams.nonvid_bit_rate + encparams.bit_rate));
    return bits_after_mux;
}   



/*
    Encode a picture based on pass-1 data.

*/

bool SeqEncoder::Pass2EncodePicture(Picture &picture, bool force_reencode)
{

    pass2ratectl.PictSetup(picture);
    bool reencode = pass2ratectl.ReencodeRequired() || force_reencode;
    if( reencode )
    {
      // Flush any previous encoding
      picture.DiscardCoding();

      // We retain the motion estimation / compensation from pass-1
      // N.b. prediction is still required as the reference images may
      // have been re-coded!
      EncodePicture( picture, pass2ratectl);
    }
    else
    {
      RetainPicture( picture, pass2ratectl );
    }

    mjpeg_info("Pass2 %5d %5d(%2d) %c q=%3.2f %s",
               picture.decode, 
               picture.present,
               picture.temp_ref,
               pict_type_char[picture.pict_type],
               picture.ABQ,
               reencode ? "RECODED" : "RETAINED" );
    return reencode;
}


/*********************
 *
 * Pass2Process - Do a unit of work in generating pass-2 encoded frames
 *             as each pass-1 coded frame is queued.
 *
 * Every time a complete pass-1 GOP is present its statistics are used to
 * setup the pass-2 bit-rate controller.   Frames are then either
 * commited using the coding generated in pass 1, or if necessary re-encoded
 * with an update quantisation to ensure they hit the target size and/or
 * respect buffering constraints.
 *
 *********************/
 
 
  
void SeqEncoder::Pass2Process()
{
    // Find end of current GOP by find next I frame *after*
    // 1st frame of GOP
    deque<Picture *>::iterator i = pass2queue.begin()+1;
    while( i < pass2queue.end() )
    {
        if( (*i)->pict_type == I_TYPE )  // First frame of next GOP
            break;
        ++i;
    }

    // Reached end of Queue without an I-frame or end of sequence
    // GOP is not yet complete to allow pass-2 coding...
    if( i == pass2queue.end() && !pass2queue.back()->end_seq)
    {
            return;
    }


    // Next GOP is [pass2queue.begin,i)
    // Setup rate control for next GOP based on structure
    // and statistics inherited from pass 1

    pass2ratectl.GopSetup( pass2queue.begin(), i );
    bool reference_reencoded = false;
    int gop_size = i-pass2queue.begin();
    for( int p =0; p < gop_size; ++p )
    {
        Picture *pic = pass2queue.front();
        bool reencoded = Pass2EncodePicture( *pic, reference_reencoded );
        reference_reencoded |= reencoded && pic->pict_type != B_TYPE;
        pic->CommitCoding();

        ReleasePicture( pic );
        pass2queue.pop_front();
    }
}

void SeqEncoder::StreamEnd()
{
    uint64_t bits_after_mux = BitsAfterMux();
    mjpeg_info( "Parameters for 2nd pass (stream frames, stream frames): -L %u -Z %.0f",
    		     pass2ratectl.getEncodedFrames(), pass2ratectl.getStreamComplexity() );
    mjpeg_info( "Guesstimated final muxed size = %lld\n", bits_after_mux/8 );
    
    unsigned int i;
    for( i = 0; i < free_pictures.size(); ++i )
    {
        delete free_pictures[i];
    }
    for( i = 0; i < released_pictures.size(); ++i )
    {
        delete released_pictures[i];
    }
}


/* 
 * Local variables:
 *  c-file-style: "stroustrup"
 *  tab-width: 4
 *  indent-tabs-mode: nil
 * End:
 */
