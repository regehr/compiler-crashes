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
system "$TEST_COMPILER_HOME/gcc-r177261-install/bin/g++ -o /dev/null -fstack-protector --param=ssp-buffer-size=4 -fPIC  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "$TEST_COMPILER_HOME/llvm-r139303-install/bin/clang++ -o /dev/null -g -Werror=format-security  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
UNREACHABLE executed
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "$TEST_COMPILER_HOME/llvm-r227783-install/bin/clang++ -mx32 small.cpp ";
IPC::Run3::run3($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
