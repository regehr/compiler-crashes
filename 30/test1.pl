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
system "$TEST_COMPILER_HOME/gcc-r145670-install/bin/g++ -o /dev/null -Wno-unused-parameter -std=c++0x -pthread -g -O2 -fstack-protector -Wformat -Werror=format-security -mtune=native  -c small.cpp >/dev/null 2>&1";
if ($? != 0) {
  print "validity check failed\n" if defined $ENV{"TEST_DEBUG"};
  exit(-1);
}
print "validity check failed\n" if defined $ENV{"TEST_DEBUG"};
my $str = <<EOF;
Assertion `false && "FIXME: Only type template names supported here"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "$TEST_COMPILER_HOME/llvm-r120788-install/bin/clang++ small.cpp ";
IPC::Run3::run3($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
if ($idx < 0){
  print "crash not found, output was '$err'\n" if defined $ENV{"TEST_DEBUG"};
  exit(-1);
}
exit (0);
