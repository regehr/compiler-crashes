#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "/home/regehr/z/compiler-install/gcc-r156850-install/bin/g++ -o /dev/null -g -fno-stack-protector -fasynchronous-unwind-tables -Wno-narrowing -Wwrite-strings -Wcast-qual -Wmissing-format-attribute -Wno-overlength-strings -O3  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r234629-install/bin/clang++ -o /dev/null -g -fno-exceptions -W -Wwrite-strings -pedantic -Wno-overlength-strings -O3  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `Op != OO_None && "Invalid opcode for overloaded unary operator"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r98697-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
