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

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_5_2_5/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M Asymptotic  &> asymptotic.".$baseName[0].".".$baseName[1].".".$ARGV[0].".out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

} # run over the list of files 




