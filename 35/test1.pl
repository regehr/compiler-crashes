#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "gcc -o /dev/null -mx32 -O2 --param=ssp-buffer-size=4 -Wformat --param max-inline-insns-single=1200 -fPIC  -c small.c >/dev/null 2>&1";
exit (-1) unless ($? == 0);
system "/home/regehr/z/compiler-install/llvm-r188798-install/bin/clang -o /dev/null -g -O2 -Wformat -Werror=format-security --param max-inline-insns-single=1200 -fPIC  -c small.c >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
internal compiler error: in extract_loc_address_regs, at lra-constraints.c:509
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/gcc-r192721-install/bin/gcc -mx32 -O1 --param max-inline-insns-single=1200 -fPIC small.c ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
