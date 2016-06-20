#!/usr/bin/env perl
use warnings;
use strict;
use IPC::Run3;
use BSD::Resource;
my $TEST_COMPILER_HOME = $ENV{"TEST_COMPILER_HOME"};
die unless defined $TEST_COMPILER_HOME;
my $TEST_TIME_LIMIT = $ENV{"TEST_TIME_LIMIT"};
setrlimit(RLIMIT_CPU, $TEST_TIME_LIMIT, $TEST_TIME_LIMIT) if defined $TEST_TIME_LIMIT;
my $TEST_FILE_LIMIT = $ENV{"TEST_FILE_LIMIT"};
setrlimit(RLIMIT_FSIZE, $TEST_FILE_LIMIT, $TEST_FILE_LIMIT) if defined $TEST_FILE_LIMIT;
my $TEST_RAM_LIMIT = $ENV{"TEST_RAM_LIMIT"};
setrlimit(RLIMIT_AS, $TEST_RAM_LIMIT, $TEST_RAM_LIMIT) if defined $TEST_RAM_LIMIT;
setrlimit(RLIMIT_VMEM, $TEST_RAM_LIMIT, $TEST_RAM_LIMIT) if defined $TEST_RAM_LIMIT;
system "$TEST_COMPILER_HOME/gcc-r202373-install/bin/g++ -o /dev/null -O2 -fstack-protector -Wall -Wreturn-type -fno-strict-aliasing -Wcast-align -Wchar-subscripts -Wreturn-type -Wno-unused-parameter -Wundef -Wmissing-noreturn -Wno-c++0x-compat -pthread -fvisibility=hidden  -c small.cpp >/dev/null 2>&1";
if ($? != 0) {
  print "validity check failed\n" if defined $ENV{"TEST_DEBUG"};
  exit(-1);
}
print "validity check failed\n" if defined $ENV{"TEST_DEBUG"};
system "$TEST_COMPILER_HOME/llvm-r196473-install/bin/clang++ -o /dev/null --param=ssp-buffer-size=4 -Wformat -Wextra -Wreturn-type -Wreturn-type -Wno-sign-compare -Wno-switch-enum -Wmissing-noreturn -Winit-self -Wno-c++0x-compat -pthread -fvisibility=hidden -fvisibility-inlines-hidden  -c small.cpp >/dev/null 2>&1";
if ($? != 0) {
  print "validity check failed\n" if defined $ENV{"TEST_DEBUG"};
  exit(-1);
}
print "validity check failed\n" if defined $ENV{"TEST_DEBUG"};
my $str = <<EOF;
Assertion `ClassDecl->hasFlexibleArrayMember() && "Incomplete array type is not valid"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "$TEST_COMPILER_HOME/llvm-r111994-install/bin/clang++ small.cpp ";
IPC::Run3::run3($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
if ($idx < 0){
  print "crash not found, output was '$err'\n" if defined $ENV{"TEST_DEBUG"};
  exit(-1);
}
exit (0);
