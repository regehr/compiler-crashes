# compiler-crashes

This repo contains some C and C++ programs that make GCC and Clang
crash. It is intended to support research into software engineering
tools such as test-case reducers.

These crashes were obtained on an x86-64 machine running Ubuntu 14.04
by building randomly selected packages using older compiler
versions. To reproduce the crashing behaviors, you will need to either
build these old compilers yourself, or else download a collection of
binary compilers that we have prepared:

  http://embed.cs.utah.edu/compiler-install.tar.bz2

These binaries are unlikely to work on anything other than Ubuntu
14.04 for x86-64.

The 60 compiler crashes were selected from a much larger number of
crashes using the following criteria:
- the crashes are distinct from each other in terms of error messages
  produced
- each crash can be reproduced by compiling a single C or C++ file

Each of the 60 directories contains the following items:
- dir.txt : the directory where the crash occurred
- cmd.txt : original compiler invocation triggering the crash
- repro_cmd.txt : also makes the crash happen
- reduced_repro_cmd.txt : makes the crash happen using as few
  arguments to the compiler as possible
- crash_string.txt : error message identifying this crash
- repro_str.txt : error message stripped down so we can look for it
- test1.pl : a C-Reduce interestingness test for this crash
- small.cpp : preprocessed C++ file triggering the crash; it would be
  called small.c if it happened to be a C file
- (varies) : the unpreprocessed C or C++ source file

The interestingness test assumes that an environment variable
TEST_COMPILER_HOME points to the directory containing the old compiler
verisons. It must be set or the test will not work. Additionally, there
are three optional environment variables:
- TEST_TIME_LIMIT : if set, kill the compiler if it runs longer than
  the specified number of seconds
- TEST_FILE_LIMIT : if set, kill the compiler if it emits more than
  the specified number of bytes of output
- TEST_RAM_LIMIT: if set, kill the compiler if it uses more than the
  specified number of bytes of RAM

Everything should work if these values are respectively set to 60,
1000000, and 6000000000.
