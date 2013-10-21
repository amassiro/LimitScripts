#!/usr/bin/perl

#################################
#### Asymptotic calculations ####
#################################

use POSIX ;

print "reading folder ".$ARGV[0]."\n" ;

# read the list of cfg files
open(LS, "ls $ARGV[0] |  grep txt |");
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

    @baseName[2] =~ s/mH//;

# allow negative \mu

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/".$ARGV[0]."/$file -m ".$baseName[2]." -M MaxLikelihoodFit --saveNormalization --rMin=-1 &> asymptotic.postFit.".$baseName[0].".".$baseName[2].".".$ARGV[0].".out \n" ;


#     $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/".$ARGV[0]."/$file -m ".$baseName[2]." -M MaxLikelihoodFit --saveNormalization --rMin=-1 &> asymptotic.postFit.".$baseName[0].".".$baseName[2].".".$ARGV[0].".out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "mv mlfit.root  asymptotic.postFit.".$baseName[0].".".$baseName[2].".".$ARGV[0].".root \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    # pvalues
    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/".$ARGV[0]."/$file -m ".$baseName[2]." -M ProfileLikelihood --signif --pvalue  -t -1 --expectSignal=1 &> asymptotic.preFit.Significance.".$baseName[0].".".$baseName[2].".".$ARGV[0].".out \n" ;
#     $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/".$ARGV[0]."/$file -m ".$baseName[2]." -M ProfileLikelihood --signif --pvalue  -t -1 --expectSignal=1  --toysFreq  &> asymptotic.preFit.Significance.".$baseName[0].".".$baseName[2].".".$ARGV[0].".out \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "mv higgsCombineTest.MaxLikelihoodFit.mH".$baseName[1].".root  asymptotic.preFit.Significance.".$baseName[0].".".$baseName[2].".".$ARGV[0].".root \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;


    # pvalues observed
    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/".$ARGV[0]."/$file -m ".$baseName[2]." -M ProfileLikelihood --signif --pvalue  &> asymptotic.postFit.Significance.".$baseName[0].".".$baseName[2].".".$ARGV[0].".out \n" ;


    print $scriptCentral ;
    system ($scriptCentral) ;

    $scriptCentral = "mv higgsCombineTest.MaxLikelihoodFit.mH".$baseName[2].".root  asymptotic.postFit.Significance.".$baseName[0].".".$baseName[2].".".$ARGV[0].".root \n" ;

    print $scriptCentral ;
    system ($scriptCentral) ;

} # run over the list of files 




