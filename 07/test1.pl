#!/usr/bin/perl
use IPC::Run3;
use BSD::Resource;
setrlimit(RLIMIT_CPU, 60, 60);
setrlimit(RLIMIT_FSIZE, 1*1000*1000*1000, 1*1000*1000*1000);
setrlimit(RLIMIT_AS, 6*1000*1000*1000, 6*1000*1000*1000);
setrlimit(RLIMIT_VMEM, 6*1000*1000*1000, 6*1000*1000*1000);
system "/home/regehr/z/compiler-install/llvm-r114139-install/bin/clang++ -o /dev/null -g -O2 --param=ssp-buffer-size=4 -Werror=return-type -Werror=address -Wformat -Wmissing-declarations -Wundef -Winit-self -Wpointer-arith -Wsign-promo -Wno-narrowing -fdiagnostics-show-option -Wno-long-long -fomit-frame-pointer -msse -msse2 -ffunction-sections -g -O2 -Wformat  -c small.cpp >/dev/null 2>&1";
exit (-1) unless ($? == 0);
my $str = <<EOF;
Assertion `TemplateArgs(T->getDepth(), T->getIndex()).getKind() == TemplateArgument::Type && "Template argument kind mismatch"' failed.
EOF
chomp $str;
system "rm -f out.txt";
my $err;
my $cmd = "/home/regehr/z/compiler-install/llvm-r99806-install/bin/clang++ small.cpp ";
IPC::Run3::run3 ($cmd, \undef, \$err, \$err);
my $idx = index($err,$str);
exit (-1) if ($idx == -1);
exit (0);
