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
system "$TEST_COMPILER_HOME/gcc-r115539-install/bin/gcc -o /dev/null -g --param=ssp-buffer-size=4 -Wformat -Werror=format-security -mtune=native  -c small.c >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "$TEST_COMPILER_HOME/llvm-r117883-install/bin/clang -o /dev/null --param=ssp-buffer-size=4 --param -mtune=native  -c small.c >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
internal compiler error: in create_mem_ref, at tree-ssa-address.c:806
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "$TEST_COMPILER_HOME/gcc-r176391-install/bin/gcc -mx32 --param max-inline-insns-single=1200 -O1 small.c ";
IPC::Run3::run3($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
