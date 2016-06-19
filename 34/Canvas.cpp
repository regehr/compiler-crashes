/*
 * Copyright (C) 2011 Canonical Ltd
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: Mirco Müller <mirco.mueller@canonical.com
 */


#include "Canvas.h"

namespace nux
{
  Canvas::Canvas (NUX_FILE_LINE_DECL) : View (NUX_FILE_LINE_PARAM)
  {
    _surface     = NULL;
    _cr          = NULL;
    _last_width  = 0;
    _last_height = 0;
    _invalid     = true;
    _texture     = NULL;
  }

  Canvas::~Canvas ()
  {
    cairo_surface_destroy (_surface);
    cairo_destroy (_cr);
    _texture->UnReference ();
  }

  void Canvas::Recreate ()
  {
    if (_surface)
      cairo_surface_destroy (_surface);

    if (_cr)
      cairo_destroy (_cr);

    if (_last_width < 1 || _last_height < 1) {
      g_debug ("Width or height of view invalid!");
      return;
    }

    _surface = cairo_image_surface_create (CAIRO_FORMAT_ARGB32,
                                           _last_width,
                                           _last_height);

    if (cairo_surface_status (_surface) != CAIRO_STATUS_SUCCESS) {
      g_debug ("Could not create image-surface!");
      return;
    }

    _cr = cairo_create (_surface);
    if (cairo_status (_cr) != CAIRO_STATUS_SUCCESS) {
      cairo_surface_destroy (_surface);
      g_debug ("Could not create cairo-context!");
      return;
    }

    cairo_set_operator (_cr, CAIRO_OPERATOR_CLEAR);
    cairo_paint (_cr);
    _invalid = false;
  }

  NBitmapData* Canvas::GetBitmap ()
  {
    if (_last_width < 1 || _last_height < 1) {
      g_debug ("Width or height invalid!");
      return NULL;
    }

    BitmapFormat  bitmap_format = BITFMT_B8G8R8A8;
    NTextureData* bitmap_data   = new NTextureData (bitmap_format,
                                                    _last_width,
                                                    _last_height,
                                                    1);
    unsigned char*  ptr           = cairo_image_surface_get_data (_surface);
    int             stride        = cairo_image_surface_get_stride (_surface);

    if (ptr == NULL || stride == 0) {
      g_debug ("Invalid surface!");

      delete bitmap_data;
      return NULL;
    }

    for (int j = 0; j < _last_height; j++) {
      Memcpy (bitmap_data->GetSurface (0).GetPtrRawData() + j * bitmap_data->GetSurface (0).GetPitch(),
                (const void *) (&ptr[j * stride]),
                _last_width * GPixelFormats[bitmap_format].NumComponents);
    }

    return bitmap_data;
  }

  cairo_surface_t* Canvas::GetCairoSurface ()
  {
    return _surface;
  }

  cairo_t* Canvas::GetCairoContext ()
  {
    return _cr;
  }

  int Canvas::GetLastWidth ()
  {
    return _last_width;
  }

  int Canvas::GetLastHeight ()
  {
    return _last_height;
  }

  // this is really just a stub... Canvas::Paint() being declared as virtual is
  // meant to be overwritten by a derived class anyway in real-world scenario
  // whatever needs to be drawn (and adapt to size) happens here in Paint()
  void Canvas::Paint ()
  {
    cairo_t* cr = GetCairoContext ();

    if (cairo_status (cr) != CAIRO_STATUS_SUCCESS)
      return;

    cairo_scale (cr, 1.0, 1.0);
    cairo_set_operator (cr, CAIRO_OPERATOR_OVER);
    cairo_rectangle (cr,
                     0.0f,
                     0.0f,
                     (double) GetLastWidth (),
                     (double) GetLastHeight ());
    cairo_set_source_rgba (cr, 1.0f, 0.0f, 0.0f, 1.0f);
    cairo_fill_preserve (cr);
    cairo_set_source_rgba (cr, 1.0f, 1.0f, 1.0f, 1.0f);
    cairo_stroke (cr);
    //cairo_surface_write_to_png (GetCairoSurface (), "/tmp/surf-debug.png");      
  }

  void Canvas::Draw (GraphicsEngine& graphics_engine, bool /* forceDraw */)
  {
    Geometry geom = GetGeometry ();

    // see if the (cairo-drawn) texture needs to be updated
    if (_invalid || _last_width != geom.width || _last_height != geom.height) {
      _last_width = geom.width;
      _last_height = geom.height;
      Recreate ();
      Paint ();
      NBitmapData* bitmap = GetBitmap ();
      if (_texture)
        _texture->UnReference ();
      _texture = GetGraphicsDisplay()->GetGpuDevice()->CreateSystemCapableTexture ();
      _texture->Update (bitmap);
      delete bitmap;
    }

    // draw the texture on screen
    graphics_engine.PushClippingRectangle (geom);

    GetWindowThread()->GetGraphicsEngine().GetRenderStates().SetBlend (false);

    TexCoordXForm texxform;
    texxform.SetWrap(TEXWRAP_CLAMP, TEXWRAP_CLAMP);
    texxform.SetTexCoordType(TexCoordXForm::OFFSET_COORD);

    graphics_engine.QRP_1Tex(geom.x,
                         geom.y,
                         geom.width,
                         geom.height,
                         _texture->GetDeviceTexture (),
                         texxform,
                         Color (1.0f, 1.0f, 1.0f, 1.0f));

    graphics_engine.PopClippingRectangle();
  }

  void Canvas::DrawContent(GraphicsEngine& /* graphics_engine */, bool /* forceDraw */)
  {
  }

  void Canvas::Invalidate()
  {
    _invalid = true;
  }

  void Canvas::PreLayoutManagement()
  {
    View::PreLayoutManagement();
  }

  long Canvas::PostLayoutManagement(long layoutResult)
  {
    long result = View::PostLayoutManagement(layoutResult);

    return result;
  }
}
