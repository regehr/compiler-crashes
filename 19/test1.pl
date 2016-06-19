#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "/home/regehr/z/compiler-install/gcc-r202373-install/bin/g++ -o /dev/null -O2 -fstack-protector -Wall -Wreturn-type -fno-strict-aliasing -Wcast-align -Wchar-subscripts -Wreturn-type -Wno-unused-parameter -Wundef -Wmissing-noreturn -Wno-c++0x-compat -pthread -fvisibility=hidden  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r196473-install/bin/clang++ -o /dev/null --param=ssp-buffer-size=4 -Wformat -Wextra -Wreturn-type -Wreturn-type -Wno-sign-compare -Wno-switch-enum -Wmissing-noreturn -Winit-self -Wno-c++0x-compat -pthread -fvisibility=hidden -fvisibility-inlines-hidden  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `ClassDecl->hasFlexibleArrayMember() && "Incomplete array type is not valid"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r111994-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
