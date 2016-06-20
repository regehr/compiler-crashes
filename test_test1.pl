#!/usr/bin/perl -w

use strict;

my @dirs = glob "[0-9]*";

foreach my $d (@dirs) {
    print "$d ";
    chdir $d;
    my $res = system "./test1.pl";
    print "$res\n";
    chdir "..";
}

print "Every test should have printed 0\n";
