#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "/home/regehr/z/compiler-install/gcc-r172490-install/bin/g++ -o /dev/null -g -O2 --param=ssp-buffer-size=4 -Wformat -Werror=format-security -W -Wall -Werror=return-type -Wmissing-declarations -Winit-self -Wpointer-arith -Wshadow -Wno-narrowing -fdiagnostics-show-option -Wno-long-long -msse -msse2 -ffunction-sections -O2 -Werror=format-security  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
internal compiler error: in finish_call_expr, at cp/semantics.c:2162
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/gcc-r171467-install/bin/g++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
