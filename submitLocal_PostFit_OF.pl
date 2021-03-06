#!/usr/bin/perl

#################################
#### Asymptotic calculations ####
#################################

use POSIX ;

print "reading folder ".$ARGV[0]."\n" ;

# read the list of cfg files
open(LS, "ls $ARGV[0] | grep OF |");
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

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_5_2_5/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M MaxLikelihoodFit --saveNormalization &> asymptotic.postFit.".$baseName[0].".".$baseName[1].".".$ARGV[0].".OF.out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "mv mlfit.root  asymptotic.postFit.".$baseName[0].".".$baseName[1].".".$ARGV[0].".OF.root \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    # pvalues
#    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_5_2_5/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M ProfileLikelihood --signif --pvalue  -t 100 --expectSignal=1 &> asymptotic.preFit.Significance.".$baseName[0].".".$baseName[1].".".$ARGV[0].".OF.out \n" ;

#    print $scriptCentral ;
#    system ($scriptCentral) ;

 #   $scriptCentral = "mv higgsCombineTest.ProfileLikelihood.mH".$baseName[1].".root  asymptotic.preFit.Significance.".$baseName[0].".".$baseName[1].".".$ARGV[0].".OF.root \n" ;

#    print $scriptCentral ;
#    system ($scriptCentral) ;


    # pvalues observed
    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_5_2_5/src/".$ARGV[0]."/$file -m ".$baseName[1]." -M ProfileLikelihood --signif --pvalue  &> asymptotic.postFit.Significance.".$baseName[0].".".$baseName[1].".".$ARGV[0].".OF.out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "mv higgsCombineTest.ProfileLikelihood.mH".$baseName[1].".root  asymptotic.postFit.Significance.".$baseName[0].".".$baseName[1].".".$ARGV[0].".OF.root \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;


} # run over the list of files 




