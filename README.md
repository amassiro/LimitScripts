LimitScripts
============

Scripts to run limits

    export SCRAM_ARCH=slc5_amd64_gcc472
    setenv SCRAM_ARCH slc5_amd64_gcc472
    cmsrel CMSSW_6_2_0_pre3
    cd CMSSW_6_2_0_pre3/src
    cmsenv
    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git pull origin master
    git checkout V03-05-00
    scramv1 b -j 4
    cd ../../






Example:


***********************
Shape SF + DF
***********************

 using the tool from latinos framework
 everything update, ready for Moriond
 optimized cuts

***************************************
To run datacard to get limits
***************************************

On

    cd /afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src
    export SCRAM_ARCH=slc5_amd64_gcc462
    cmsenv

    rm -r  qqHWWlnln-WHSC2012-2012-26Jun-Shape2012
    scp amassiro@cmsneu.cern.ch:/home/amassiro/Latinos/Shape/playground/whscShape.tgz ./
    tar -xvf whscShape.tgz
    mv datacards/ qqHWWlnln-WHSC2012-2012-26Jun-Shape2012

    rm *.root

    rm asymptotic*qqHWWlnln-WHSC2012-2012-26Jun-Shape2012.out
    perl submitLocal_CutBased.pl qqHWWlnln-WHSC2012-2012-26Jun-Shape2012
    perl submitLocal_CutBased_PostFit.pl qqHWWlnln-WHSC2012-2012-26Jun-Shape2012

***********************************
To get values from output
and draw band plot
***********************************



    rm -r qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result
    mkdir qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/asymptotic*qqHWWlnln-WHSC2012-2012-26Jun-Shape2012.out ./qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result/



    scp -r amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/scratch0/VBF/Limit/CMSSW_6_1_0/src/qqHWWlnln-WHSC2012-2012-26Jun-Shape2012/ ./

    cat qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result/asymptotic.hww-19.???.qqHWWlnln-WHSC2012-2012-26Jun-Shape2012.out  | grep 50.0% | awk '{print $5}' &> resultsMedian.txt

    for fil in `ls qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result/asymptotic.hww-19.???.qqHWWlnln-WHSC2012-2012-26Jun-Shape2012.out` ; do \
        cat $fil | grep Expected | tr "\n" " " | awk '{print $10" "$20}'; \
        done  &> results68.txt

    for fil in `ls qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result/asymptotic.hww-19.???.qqHWWlnln-WHSC2012-2012-26Jun-Shape2012.out` ; do \
        cat $fil | grep Expected | tr "\n" " " | awk '{print $5" "$25}'; \
        done  &> results95.txt

    cat qqHWWlnln-WHSC2012-2012-26Jun-Shape2012-Result/asymptotic.hww-19.???.qqHWWlnln-WHSC2012-2012-26Jun-Shape2012.out | grep Observed | awk '{print $5}' &> resultsData.txt

    r00t -l Draw_Plot_VBF.cxx
    r00t -l Draw_Table_VBF.cxx
    r00t -l Draw_Table_Numbers_VBF.cxx\(\"qqHWWlnln-WHSC2012-2012-26Jun-Shape2012\"\)

    r00t -l Draw_Plot_VBF.cxx\(0\)
    r00t -l Draw_Table_VBF.cxx\(0\)


Propaganda plot

    mkdir postFit
    mkAutopsy.py datacards/hww-19.47fb.mH125.ll_whsc_shape.txt  -m 125  --dump postFit/mH125-error.root
    scp amassiro@cmsneu.cern.ch:/home/amassiro/Latinos/Shape/playground/whscShape/postFit/mH125-error.root postFit-WHSC/
    r00t Plot_AM_WHSC_Propaganda_Moriond.C+



