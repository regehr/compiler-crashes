#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "/home/regehr/z/compiler-install/gcc-r179503-install/bin/g++ -o /dev/null -ftemplate-depth-128 -g -Wformat -Werror=format-security -O3 -Wno-inline -fno-strict-aliasing -ftemplate-depth-1024 -O3 -mtune=native  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r238138-install/bin/clang++ -o /dev/null -ftemplate-depth-128 -g -fstack-protector --param=ssp-buffer-size=4 -Wformat -Werror=format-security -O3 -finline-functions -Wno-inline -Wall -g -O3 -mtune=native  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `!ActiveTemplateInstantiations.empty() && "Cannot perform an instantiation without some context on the " "instantiation stack"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r113588-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
