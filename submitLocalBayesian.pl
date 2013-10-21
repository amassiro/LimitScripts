#!/usr/bin/perl

#################################
#### Asymptotic calculations ####
#################################

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

#    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M BayesianSimple  &> bayesian.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out \n" ;
    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M MarkovChainMC --tries 100  &> bayesian.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M MarkovChainMC --tries 100 -t 100 &> bayesian.exp.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

} # run over the list of files 




