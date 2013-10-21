#!/usr/bin/perl

use POSIX ;

print "reading folder ".$ARGV[0]."\n" ;

# read the list of cfg files
open(LS, "ls $ARGV[0] |");
while (<LS>) 
  {
    chomp;
    push @datacards, $_;
  }
close(LS);
  
# run over the list of files 
foreach $file (@datacards) 
  {
    print "FILE : ".$file."\n";
    @baseName = split (/\./, $file) ;

#    $scriptCentral = "bsub -q 8nm -o central.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out combine.sh /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_4/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M HybridNew --frequentist --testStat LHC  -H ProfileLikelihood    \n" ;
#    $scriptCentral = "bsub -q 8nh -o central.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out combine.sh /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_4/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M HybridNew --frequentist --testStat LHC  -H ProfileLikelihood  --fork 4  \n" ;
    $scriptCentral = "bsub -q 8nh -o central.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out combine.sh /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_4/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M Asymptotic  \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

#    $scriptExpected = "bsub -q 8nh -o expected.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out combine.sh -t 1000 /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_4/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M HybridNew --frequentist --testStat LHC  -H ProfileLikelihood    \n" ;

#    $scriptExpected = "bsub -q 2nd -o expected.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out combine.sh -t 1000 /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_4/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M HybridNew --frequentist --testStat LHC  -H ProfileLikelihood  --fork 4   \n" ;

    print $scriptExpected ;
    system ($scriptExpected) ;


  } # run over the list of files 




