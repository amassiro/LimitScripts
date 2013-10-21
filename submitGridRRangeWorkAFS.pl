#!/usr/bin/perl

######################################
#### GRID submission calculations ####
######################################

use POSIX ;

print "reading RRange file ".$ARGV[1]."\n" ;
# read the file with the asymptotic limits
open ASYLIMS, "$ARGV[1]";
while (<ASYLIMS>) 
{
    chomp;
    push @asyexplim, $_;
}
close(ASYLIMS);


print "reading folder ".$ARGV[0]."\n" ;

# read the list of cfg files
open(LS, "ls $ARGV[0] |");
while (<LS>) 
  {
    chomp;
    push @datacards, $_;
  }
close(LS);
  
# iterator for the mass points
$imass = 0;  
  
# run over the list of files 
foreach $file (@datacards) 
  {
    print "FILE : ".$file."\n";
    @baseName = split (/\./, $file) ;

    @values = split(' ', $asyexplim[$imass]);
    $liminf = $values[1];
    $limsup = $values[2];
    $numRScan = $values[3];

#    $scriptCentral = "HiggsAnalysis/CombinedLimit/test/makeGridUsingCrab.py /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file 1 30 -n 100 -t 3000 -j 30 -o grid.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out \n" ;

 $scriptCentral = "HiggsAnalysis/CombinedLimit/test/makeGridUsingCrab.py /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file $liminf $limsup -n $numRScan -t 100 -j 100 -o grid.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out \n" ;

#
# -n 200   ->    200 = number of point in R scan (in each job)
# -t 100   -> total_number_of_events = 100       ( -> -i "1000", number of iterations, 1000 x 500 (toys))
# -T 500   -> the 500 toys defined above
# -j 30    -> number_of_jobs = 30
#

# the number of iterations (option -i) determines how many points are proposed to fill a single Markov Chain. The default value is 10k, and a plausible range is between 5k (for quick checks) and 20-30k for lengthy calculations. Usually beyond 30k you get a better tradeoff in time vs accuracy by increasing the number of chains (option tries) 

# When computing the significances, there is no adaptive generation. You can control the number of toys with option T or toysH= and the option iterations (shortcut -i, default 1): the default of (1 iteration)×(500 toys) is not enough to probe a significances above ~2. We suggest that you uncrease the number of iterations instead of the number of toys, since the increase in time is linear with the iterations but non-linear with the toys.



 

    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "cat grid.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out.cfg > tmp.txt \n" ;
    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "echo \"ui_working_dir = /afs/cern.ch/work/a/amassiro/Limits/VHWWjjlnln/".$ARGV[0]."/crab_".$baseName[1].".".$ARGV[0]."\" >> tmp.txt \n" ;
    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "mv tmp.txt grid.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out.cfg \n" ;
    print $scriptCentral ;
    system ($scriptCentral) ;

    #increment the iterator
    ++$imass ;
} # run over the list of files 




