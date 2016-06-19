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
system "$TEST_COMPILER_HOME/gcc-r211028-install/bin/g++ -o /dev/null -ftemplate-depth-128 -g -O2 -fstack-protector --param=ssp-buffer-size=4 -O3 -Wall -ftemplate-depth-1024 -O3  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
internal compiler error: canonical types differ for identical types boost::rv<boost::log::v2_mt_posix::basic_settings<char> >& and boost::rv<boost::log::v2_mt_posix::basic_settings<char> >&
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "$TEST_COMPILER_HOME/gcc-r223066-install/bin/g++ small.cpp ";
IPC::Run3::run3($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
