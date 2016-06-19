#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "g++ -o /dev/null -fshow-column -Wredundant-decls -Wcast-qual -Wcast-align -Wundef -Wstrict-null-sentinel -Wstrict-overflow=1 -Wlogical-op -Wdouble-promotion -fvisibility=hidden -g -O2 -fstack-protector -Wformat -Werror=format-security  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r226543-install/bin/clang++ -o /dev/null -Wall -W -Wpointer-arith -Wcast-align -fno-gnu-keywords -Wundef -Wstrict-null-sentinel -Wlogical-op -Wmissing-declarations -Winit-self -fvisibility=hidden -g -O2  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `I->second == CleanupEntries.size() - 1' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r99806-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
