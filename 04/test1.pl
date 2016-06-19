#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "g++ -o /dev/null -O2 -fstack-protector -Werror=format-security -finline-functions -Wno-inline -pthread -fPIC -fno-strict-aliasing -ftemplate-depth-1024 -O3  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r242575-install/bin/clang++ -o /dev/null -ftemplate-depth-128 -fstack-protector -Wformat -O3 -pthread -fno-strict-aliasing -O3 -mtune=native  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `ICS->UserDefined.After.ReferenceBinding && ICS->UserDefined.After.DirectBinding && "Expected a direct reference binding!"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r97740-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
