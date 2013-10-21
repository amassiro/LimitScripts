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
    push @dataCards, $_;
  }
close(LS);


# iterator for the mass points
$imass = 0;  
    
# run over the list of files 
foreach $file (@dataCards) 
  {
    print "FILE : ".$file."\n";
    @baseName = split (/\./, $file) ;

    @values = split(' ', $asyexplim[$imass]);
    $liminf =$values[1];
    $limsup =$values[2];
    $numRScan =$values[3];

    $scriptCentral = "rm grid.dataCard.".$baseName[1].".".$ARGV[0].".out\n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;

#############
# obrserved #

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -M HybridNew  --frequentist --testStat LHC -H ProfileLikelihood     --rMin=$liminf --rMax=$limsup --grid=/tmp/amassiro/crab_".$baseName[1].".".$ARGV[0]."/grid.root | grep \"@ 95% CL\" | grep \"+/-\"  | awk '{print \"echo \\\"Observed Limit: r <  \"\$4\" \\\" >> grid.dataCard.".$baseName[1].".".$ARGV[0].".out \"}' | /bin/sh  \n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;

############
# expected #

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -M HybridNew  --frequentist --testStat LHC -H ProfileLikelihood     --rMin=$liminf --rMax=$limsup --grid=/tmp/amassiro/crab_".$baseName[1].".".$ARGV[0]."/grid.root  --expectedFromGrid 0.0025 | grep \"@ 95% CL\" | grep \"+/-\"  | awk '{print \"echo \\\"Expected  2.5\%: r < \"\$4\" \\\" >> grid.dataCard.".$baseName[1].".".$ARGV[0].".out \"}' | /bin/sh  \n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -M HybridNew  --frequentist --testStat LHC -H ProfileLikelihood     --rMin=$liminf --rMax=$limsup --grid=/tmp/amassiro/crab_".$baseName[1].".".$ARGV[0]."/grid.root  --expectedFromGrid 0.16 | grep \"@ 95% CL\" | grep \"+/-\"  | awk '{print \"echo \\\"Expected 16.0\%: r <  \"\$4\" \\\" >> grid.dataCard.".$baseName[1].".".$ARGV[0].".out \"}' | /bin/sh  \n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -M HybridNew  --frequentist --testStat LHC -H ProfileLikelihood     --rMin=$liminf --rMax=$limsup --grid=/tmp/amassiro/crab_".$baseName[1].".".$ARGV[0]."/grid.root  --expectedFromGrid 0.5 | grep \"@ 95% CL\" | grep \"+/-\"  | awk '{print \"echo \\\"Expected 50.0\%: r <  \"\$4\" \\\" >> grid.dataCard.".$baseName[1].".".$ARGV[0].".out \"}' | /bin/sh  \n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;


    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -M HybridNew  --frequentist --testStat LHC -H ProfileLikelihood     --rMin=$liminf --rMax=$limsup --grid=/tmp/amassiro/crab_".$baseName[1].".".$ARGV[0]."/grid.root  --expectedFromGrid 0.84 | grep \"@ 95% CL\" | grep \"+/-\"  | awk '{print \"echo \\\"Expected 84.0\%: r <  \"\$4\" \\\" >> grid.dataCard.".$baseName[1].".".$ARGV[0].".out \"}' | /bin/sh  \n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;

    $scriptCentral = "combine /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_4_2_8/src/".$ARGV[0]."/$file -M HybridNew  --frequentist --testStat LHC -H ProfileLikelihood     --rMin=$liminf --rMax=$limsup --grid=/tmp/amassiro/crab_".$baseName[1].".".$ARGV[0]."/grid.root  --expectedFromGrid 0.975 | grep \"@ 95% CL\" | grep \"+/-\"  | awk '{print \"echo \\\"Expected 97.5\%: r <  \"\$4\" \\\" >> grid.dataCard.".$baseName[1].".".$ARGV[0].".out \"}' | /bin/sh  \n" ;
    print $scriptCentral ;
#    system ($scriptCentral) ;




    #increment the iterator
    ++$imass ;

} # run over the list of files 




