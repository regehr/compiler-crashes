#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "gcc -o /dev/null -nostdinc -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -mno-sse -mtune=generic -mno-red-zone -funit-at-a-time -maccumulate-outgoing-args -pipe -fno-asynchronous-unwind-tables -mno-sse -mno-sse2 -mno-avx -Wno-unused-but-set-variable -fno-omit-frame-pointer -pg -fno-inline-functions-called-once -fno-strict-overflow -Werror=implicit-int -Werror=strict-prototypes  -c small.c >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
internal compiler error: in expand_expr_real_1, at expr.c:10453
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/gcc-r192721-install/bin/gcc small.c ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
