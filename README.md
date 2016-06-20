--------------------------------------------------------------------

# compiler-crashes

This repository contains 8 C files and 52 C++ files that make GCC
and Clang crash. Its purpose is to support research into software
engineering tools such as test-case reducers.

These crashes were obtained on an x86-64 machine running Ubuntu 14.04
by building randomly selected packages using randomly selected older
compiler versions. To reproduce the crashing behaviors, you will need
to either build these old compilers or else download a collection of
binary compilers that we have prepared:

  http://embed.cs.utah.edu/compiler-install.tar.bz2

These binaries are unlikely to work on an OS other than Ubuntu 14.04
for x86-64. Since both LLVM and GCC use Subversion, compilers are
identified using their SVN revision number. We built the compilers
using this script, which takes a revision number as an argument:

  https://github.com/csmith-project/csmith/blob/master/driver/build_compiler

Building older compiler versions can be painful and a number of small
hacks had to be applied to get various versions to build. See the
notes at the bottom of this file. These notes are probably incomplete.

We picked 60 compiler crashes out of a much larger number of crashes
(about 3,500) using the following criteria:
- the crashes are distinct from each other in terms of error messages
  produced
- each crash can be reproduced by compiling a single C or C++ file

Each of the 60 directories contains the following items:
- dir.txt : the original directory where the crash occurred (contains
  the name of the package where the source file came from)
- cmd.txt : the original compiler invocation triggering the crash
- repro_cmd.txt : command used to reproduce the crash
- reduced_repro_cmd.txt : makes the crash happen using as few
  arguments to the compiler as possible
- crash_string.txt : error message identifying this crash
- repro_str.txt : error message stripped down so that it can be looked for
  by an interestingness test
- test1.pl : a C-Reduce interestingness test for this crash
- small.c or small.cpp : preprocessed C or C++ file triggering the crash
- (varies) : the unpreprocessed C or C++ source file

The interestingness tests assume that an environment variable
TEST_COMPILER_HOME points to the directory containing the old compiler
verisons. It must be set or the tests will not work. Additionally, there
are four optional environment variables:
- TEST_TIME_LIMIT : if set, kill the compiler if it runs longer than
  the specified number of seconds
- TEST_FILE_LIMIT : if set, kill the compiler if it emits more than
  the specified number of bytes of output
- TEST_RAM_LIMIT : if set, kill the compiler if it uses more than the
  specified number of bytes of RAM
- TEST_DEBUG : if set, emit some debugging output that may help in
  diagnosing interestingness tests that are not behaving properly

Everything should work if the resource limit values are respectively
set to 60 (1 minute), 100000000 (100 MB), and 6000000000 (6 GB). Be
careful with these since it's a pain to debug compilers that get
killed by resource limits. You may well be able to get away with not
setting these limits at all, it depends on how much you trust a buggy
compiler to not misbehave.

Run the "test_test1.pl" program to make sure all interestingness tests
are working.

You should turn off ASLR before trying to reproduce crashes.

--------------------------------------------------------------------

To get old GCC versions to build:

changed line 62 of /usr/include/x86_64-linux-gnu/bits/siginfo.h to:

  typedef struct siginfo

added:

  --disable-multilib --disable-bootstrap

to GCC configure options

also:

export CXX='g++-4.4 -w -fpermissive'
export CC='gcc-4.4 -w'
export LIBRARY_PATH=/usr/lib/x86_64-linux-gnu
export LD_LIBRARY_PATH=/usr/lib/x86_64-linux-gnu

--------------------------------------------------------------------

To get old LLVM versions to build:

export CXX='g++-4.4 -w -fpermissive'
export CC='gcc-4.4 -w'

add these to cassert header file:

  #include <stddef.h>
  #include <unistd.h>

starting around revision 160000, swich from using GCC 4.4 to 4.8

--------------------------------------------------------------------
