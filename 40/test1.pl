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
system "g++ -o /dev/null -fshow-column -Wredundant-decls -Wcast-qual -Wcast-align -Wundef -Wstrict-null-sentinel -Wstrict-overflow=1 -Wlogical-op -Wdouble-promotion -fvisibility=hidden -g -O2 -fstack-protector -Wformat -Werror=format-security  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "$TEST_COMPILER_HOME/llvm-r226543-install/bin/clang++ -o /dev/null -Wall -W -Wpointer-arith -Wcast-align -fno-gnu-keywords -Wundef -Wstrict-null-sentinel -Wlogical-op -Wmissing-declarations -Winit-self -fvisibility=hidden -g -O2  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `I->second == CleanupEntries.size() - 1' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "$TEST_COMPILER_HOME/llvm-r99806-install/bin/clang++ small.cpp ";
IPC::Run3::run3($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
