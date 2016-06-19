#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "/home/regehr/z/compiler-install/gcc-r206499-install/bin/g++ -o /dev/null -g -O2 -fstack-protector -Wformat -Werror=format-security -Wall -Wreturn-type -fno-strict-aliasing -Wcast-align -Wchar-subscripts -Wformat-security -Wno-switch -Wno-switch-enum -Wmissing-noreturn -Winit-self -fdata-sections -fvisibility-inlines-hidden -pthread -pthread -pthread -pthread -pthread -mtune=native  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r244333-install/bin/clang++ -o /dev/null -fstack-protector -Wformat -Wall -Wextra -Wreturn-type -fno-strict-aliasing -Wchar-subscripts -Wno-unused-parameter -Wno-switch-enum -Wno-c++0x-compat -fdata-sections -O2 -fvisibility=hidden -fvisibility-inlines-hidden -pthread -pthread -pthread -mtune=native  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `Decl && "Passed null for Decl param"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r102304-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
