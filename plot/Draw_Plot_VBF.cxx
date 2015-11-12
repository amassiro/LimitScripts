void Draw_Plot_VBF(int Data = 1, int FP = 0, int Bayes = 0, int bigCombination = 0){
 
 
 ///===========================================================================
 
 //  gROOT->Reset();
 //  gROOT->SetStyle("Plain");
 //  gStyle->SetPalette(1); 
 //  gStyle->SetOptStat(1110);
 //  gStyle->SetPadTickX(1);
 //  gStyle->SetPadTickY(1);
 //  gStyle->SetTitleBorderSize(0);
 
 // style:
 
 //For the canvas:
 gStyle->SetCanvasBorderMode(0);
 gStyle->SetCanvasColor(kWhite);
 gStyle->SetCanvasDefH(800); //600
 //Height of canvas
 gStyle->SetCanvasDefW(800);//800 //Width of canvas
 gStyle->SetCanvasDefX(0);   //POsition on screen
 gStyle->SetCanvasDefY(0);
 
 // For the Pad:
 gStyle->SetPadBorderMode(0);
 // gStyle->SetPadBorderSize(Width_t size = 1);
 gStyle->SetPadColor(kWhite);
 gStyle->SetPadGridX(false);
 gStyle->SetPadGridY(false);
 gStyle->SetGridColor(0);
 gStyle->SetGridStyle(3);
 gStyle->SetGridWidth(1);
 
 //For the frame:
 gStyle->SetFrameBorderMode(0);
 gStyle->SetFrameBorderSize(1);
 gStyle->SetFrameFillColor(0);
 gStyle->SetFrameFillStyle(0);
 gStyle->SetFrameLineColor(1);
 gStyle->SetFrameLineStyle(1);
 gStyle->SetFrameLineWidth(1);
 
 // For the histo:
 gStyle->SetHistLineColor(1);
 gStyle->SetHistLineStyle(0);
 gStyle->SetHistLineWidth(2);
 gStyle->SetEndErrorSize(2);
 //  gStyle->SetErrorMarker(20);
 //gStyle->SetErrorX(0.);
 gStyle->SetMarkerStyle(8);
 
 
 // For the statistics box:
 gStyle->SetOptFile(0);
 //  gStyle->SetOptStat(1);
 gStyle->SetOptStat(0);
 gStyle->SetStatColor(kWhite);
 gStyle->SetStatFont(42);
 gStyle->SetStatFontSize(0.025);
 gStyle->SetStatTextColor(1);
 gStyle->SetStatFormat("6.4g");
 gStyle->SetStatBorderSize(1);
 //   gStyle->SetStatBorderSize(0);
 gStyle->SetStatH(.1);
 gStyle->SetStatW(.15);
 
 //  gStyle->SetStatX(.9);
 // gStyle->SetStatY(.9);
 
 // For the Global title:
 gStyle->SetOptTitle(0);
 //   gStyle->SetOptTitle(1);
 gStyle->SetTitleFont(42);
 gStyle->SetTitleColor(1);
 gStyle->SetTitleTextColor(1);
 gStyle->SetTitleFillColor(10);
 gStyle->SetTitleFontSize(0.05);
 
 // For the axis titles:
 gStyle->SetTitleColor(1, "XYZ");
 gStyle->SetTitleFont(42, "XYZ");
 //  gStyle->SetTitleSize(0.06, "XYZ");
 gStyle->SetTitleSize(0.04, "XYZ");
 gStyle->SetTitleXOffset(0.9);
 // gStyle->SetTitleYOffset(1.25);
 //gStyle->SetTitleXOffset(0.5);
 gStyle->SetTitleYOffset(1.0);
 
 // For the axis labels:
 gStyle->SetLabelColor(1, "XYZ");
 gStyle->SetLabelFont(42, "XYZ");
 gStyle->SetLabelOffset(0.007, "XYZ");
 
 gStyle->SetLabelSize(0.05, "XYZ");
 //gStyle->SetLabelSize(0.02, "XYZ");
 
 // For the axis:
 gStyle->SetAxisColor(1, "XYZ");
 gStyle->SetStripDecimals(kTRUE);
 gStyle->SetTickLength(0.03, "XYZ");
 gStyle->SetNdivisions(510, "XYZ");
 gStyle->SetPadTickX(0);  // To get tick marks on the opposite side of the frame
 gStyle->SetPadTickY(1);
 // // Postscript options:
 //   //gStyle->SetPaperSize(20.,20.);
 
 // CC style  
 gStyle->SetTitleXOffset(0.8);
 //   gStyle->SetTitleYOffset(0.8);
 //Inv Mass Presel
 gStyle->SetTitleYOffset(1.0);
 
 gStyle->SetLabelOffset(0.005, "XYZ");
 gStyle->SetTitleSize(0.07, "XYZ");
 gStyle->SetTitleFont(42,"X");
 gStyle->SetTitleFont(42,"Y");
 /*  gStyle->SetPadBottomMargin(0.13);
 gStyle->SetPadTopMargin(0.23);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.21);*/
 /*  //PlotPt4Lep=====================
 gStyle->SetPadBottomMargin(0.15);
 gStyle->SetPadTopMargin(0.05);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.05);*/
 /*  //PlotPrePreSelInvMass=====================
 gStyle->SetPadBottomMargin(0.15);
 gStyle->SetPadTopMargin(0.10);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.10);*/
 /*  //PlotPrePreSelEff=====================
 gStyle->SetPadBottomMargin(0.15);
 gStyle->SetPadTopMargin(0.15);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.15);*/
 //PlotInvMass=====================
 gStyle->SetPadBottomMargin(0.15);
 gStyle->SetPadTopMargin(0.05);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.10);
 /*  //PlotEffvsEff=====================
 gStyle->SetPadBottomMargin(0.15);
 gStyle->SetPadTopMargin(0.05);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.05);*/
 /*  //JetMET=====================
 gStyle->SetPadBottomMargin(0.15);
 gStyle->SetPadTopMargin(0.05);
 gStyle->SetPadLeftMargin(0.15);
 gStyle->SetPadRightMargin(0.05);*/
 //   //Met2dEff=====================
 //   gStyle->SetPadBottomMargin(0.15);
 //   gStyle->SetPadTopMargin(0.05);
 //   gStyle->SetPadLeftMargin(0.15);
 //   gStyle->SetPadRightMargin(0.15);
 //   //Dalitz+PtVsMET=====================
 //   gStyle->SetPadBottomMargin(0.15);
 //   gStyle->SetPadTopMargin(0.10);
 //   gStyle->SetPadLeftMargin(0.15);
 //   gStyle->SetPadRightMargin(0.15);
 
 /*  gStyle->SetPadBottomMargin(0.13);
 gStyle->SetPadLeftMargin(0.15);*/
 //  gStyle->SetHistLineWidth(3);
 gStyle->SetHistLineWidth(2);
 gStyle->SetLineStyleString(5,"20 12 4 12");
 gStyle->SetLineStyleString(6,"20 12 4 12 4 12 4 12");
 gStyle->SetLineStyleString(7,"20 20");
 gStyle->SetLineStyleString(8,"20 12 4 12 4 12");
 gStyle->SetLineStyleString(9,"80 20");
 
 
//  TGaxis::SetMaxDigits(2);
 
 
 gStyle->cd(); 
 
 ///===========================================================================
  
 Double_t R_DATA_BAYES_vals[80]; 
 Double_t R_DATA_vals[80]; 
//  Double_t x_vals[80] = {120, 130, 140, 150, 160, 170, 180, 190};
//  Double_t x_vals[80] = {118, 126, 130, 135, 170, 180, 190};
//  Double_t x_vals[80] = {118, 120, 124, 126, 128, 130, 135, 140, 150, 160, 170, 180, 190};
//  Double_t x_vals[80] = {122, 124, 126, 128, 130, 135, 140, 150, 160, 180, 190};
//   Double_t x_vals[80] = {118, 120, 124, 130, 135, 140, 150, 160, 170, 180, 190};
//  Double_t x_vals[80] = {118, 122, 126, 128, 130, 135, 140, 150, 170, 180};
//  Double_t x_vals[80] = {118, 120, 124, 128, 130, 135, 140, 150, 160, 170, 180, 190};
//  Double_t x_vals[80] = {110, 120, 125, 130, 135, 140, 150, 155, 160, 170, 180, 190, 200, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};
//  Double_t x_vals[80] = {110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 170, 180, 190, 200, 250, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};

//  Double_t x_vals[80] = {110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 170, 180, 190, 200, 250, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};
 if (bigCombination == 1) {
  gROOT->ProcessLine ("Double_t x_vals[80] = {120, 125, 130, 135, 140, 145, 150, 155, 160, 170, 180, 190};");
 }
 else if (bigCombination == 2) { //---- 7+8 with 8 shape for missing points
  gROOT->ProcessLine ("Double_t x_vals[80] = {110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 170, 180, 190, 200, 250, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};");
 }
 else if (bigCombination == 3 || bigCombination == 4) {
  //---- 7+8 for VBF (missing points! 135 and 145) or also only 7 TeV for VBF
//   gROOT->ProcessLine ("Double_t x_vals[80] = {110, 115, 120, 125, 130     , 140,    , 150, 155, 160, 170, 180, 190, 200, 250, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};");
//---- 7+8 for VBF (missing points! 145 and 155) or also only 7 TeV for VBF
  gROOT->ProcessLine ("Double_t x_vals[80] = {110, 115, 120, 125, 130, 135, 140,    , 150,   160, 170, 180, 190, 200, 250, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};");
 }
 else {
  gROOT->ProcessLine ("Double_t x_vals[80] = {110, 115, 120, 125, 130, 135, 140, 145, 150, 155, 160, 170, 180, 190, 200, 250, 300, 350, 400, 450, 500, 550, 600, 700, 800, 900, 1000};");  
 }
 
 //   Double_t x_vals[80] = {118, 120, 122, 124, 126, 128, 130, 135, 140, 150, 160, 170, 180, 190};
 Double_t b_vals_exclusion[80];
 Double_t b_down_bars1_exclusion[80];
 Double_t b_up_bars1_exclusion[80];
 Double_t b_down_bars2_exclusion[80];
 Double_t b_up_bars2_exclusion[80];
 Double_t sb_vals_exclusion[80];

 std::string buffer;
 int numMass = 0;
  
 numMass = 0;
 std::ifstream file68 ("results68.txt");  
 while(!file68.eof()){
//   std::cout << "num =";
  getline(file68,buffer);
//   std::cout << "buffer = " << buffer << std::endl;
  if (buffer != ""){ ///---> save from empty line at the end!
   std::stringstream line( buffer ); 
   line >> b_down_bars1_exclusion[numMass]; 
   line >> b_up_bars1_exclusion[numMass]; 
//    std::cout << std::endl;
   numMass++;
  } 
 }
 
 numMass = 0;
 std::ifstream file95 ("results95.txt");  
 while(!file95.eof()){
//   std::cout << "num =";
  getline(file95,buffer);
//  std::cout << "buffer = " << buffer << std::endl;
  if (buffer != ""){ ///---> save from empty line at the end!
   std::stringstream line( buffer ); 
   line >> b_down_bars2_exclusion[numMass]; 
   line >> b_up_bars2_exclusion[numMass]; 
//    std::cout << std::endl;
   numMass++;
  } 
 }
 
 numMass = 0;
 std::ifstream fileMedian ("resultsMedian.txt");  
 while(!fileMedian.eof()){
//   std::cout << "num =";
  getline(fileMedian,buffer);
//   std::cout << "buffer = " << buffer << std::endl;
  if (buffer != ""){ ///---> save from empty line at the end!
   std::stringstream line( buffer ); 
   line >> b_vals_exclusion[numMass]; 
   std::cout << " Mass(" << numMass << ") = " << x_vals[numMass] << " -> " << b_vals_exclusion[numMass] << std::endl;
//    std::cout << std::endl;
   numMass++;
  } 
 }
 
 
 numMass = 0;
 std::ifstream fileData ("resultsData.txt");  
 while(!fileData.eof()){
//   std::cout << "num =";
  getline(fileData,buffer);
//   std::cout << "buffer = " << buffer << std::endl;
  if (buffer != ""){ ///---> save from empty line at the end!
   std::stringstream line( buffer ); 
   line >> R_DATA_vals[numMass];
//    std::cout << std::endl;
   numMass++;
  } 
 }
 
 std::cout << " numMass = " << numMass << std::endl;
 
 for (int iMass = 0; iMass < numMass; iMass++){
  b_down_bars2_exclusion[iMass] = fabs( b_down_bars2_exclusion[iMass]-b_vals_exclusion[iMass]);
  b_down_bars1_exclusion[iMass] = fabs( b_down_bars1_exclusion[iMass]-b_vals_exclusion[iMass]);
  b_up_bars1_exclusion[iMass] = fabs( b_up_bars1_exclusion[iMass]-b_vals_exclusion[iMass]);
  b_up_bars2_exclusion[iMass] = fabs( b_up_bars2_exclusion[iMass]-b_vals_exclusion[iMass]);
//   std::cout << " Mass(" << iMass << ") = " << x_vals[iMass] << " -> " << b_down_bars2_exclusion[iMass] << std::endl;
 }
 
 
 
 
 
 //---- bayesian (begin)
 int tempnumMass = 0;
 if (Bayes == 1) {
  std::ifstream fileDataBayes ("resultsMedianBayes.txt");  
  while(!fileDataBayes.eof()){
   getline(fileDataBayes,buffer);
   if (buffer != ""){ ///---> save from empty line at the end!
   std::stringstream line( buffer ); 
   line >> R_DATA_BAYES_vals[tempnumMass];
   tempnumMass++;
   } 
  }
 }
 //---- bayesian (end)
 
 
 
 
 
 int n_points = numMass;
//  int n_points = 22;
//  int n_points = 23;
 
 //---- LEP-like band plot ---- cfr LEPBandPlot.cc/.h in RSC package ----
 
 TFile* outputFileRoot = TFile::Open("./data/LepPlot_SM.root","RECREATE");
 
 
 ///---- exclusion ----
 TCanvas *cExclusion = new TCanvas("cExclusion","cExclusion", 1000, 700);
 
 //---- bayesian (begin)
 if (Bayes == 1) {
  TGraph* m_exclusion_DATA_BAYES_line_graph = new TGraph(n_points, x_vals, R_DATA_BAYES_vals);
  m_exclusion_DATA_BAYES_line_graph->SetLineWidth(3);
  m_exclusion_DATA_BAYES_line_graph->SetLineStyle(3);
  m_exclusion_DATA_BAYES_line_graph->SetMarkerSize(0);
  m_exclusion_DATA_BAYES_line_graph->SetLineColor(kMagenta);
  m_exclusion_DATA_BAYES_line_graph->SetFillColor(kWhite);
 }
 //---- bayesian (end)
 
 // real DATA
 TGraph* m_exclusion_DATA_line_graph = new TGraph(n_points, x_vals, R_DATA_vals);
 m_exclusion_DATA_line_graph->SetLineWidth(2);
 m_exclusion_DATA_line_graph->SetLineStyle(1);
 m_exclusion_DATA_line_graph->SetMarkerSize(1);
// m_exclusion_DATA_line_graph->SetLineColor(kRed);
// m_exclusion_DATA_line_graph->SetMarkerColor(kRed);
 m_exclusion_DATA_line_graph->SetFillColor(kWhite);
 
 // bkg hypothesis line
 TGraph* m_exclusion_b_line_graph = new TGraph(n_points, x_vals, b_vals_exclusion);
 m_exclusion_b_line_graph->SetMarkerSize(0);
 m_exclusion_b_line_graph->SetLineWidth(2);
 m_exclusion_b_line_graph->SetLineStyle(2);
 m_exclusion_b_line_graph->SetFillColor(kWhite);
 
 
 // bkg hypothesis band 1 sigma
 TGraphAsymmErrors* m_exclusion_b_band_graph_1sigma = new TGraphAsymmErrors(n_points,x_vals,b_vals_exclusion,0,0,b_down_bars1_exclusion,b_up_bars1_exclusion);
 
 m_exclusion_b_band_graph_1sigma->SetFillColor(kGreen);
 m_exclusion_b_band_graph_1sigma->SetFillStyle(3001);
 m_exclusion_b_band_graph_1sigma->SetLineColor(kGreen);
 m_exclusion_b_band_graph_1sigma->SetMarkerColor(kGreen);
 
 // bkg hypothesis band 2 sigma
 TGraphAsymmErrors* m_exclusion_b_band_graph_2sigma = new TGraphAsymmErrors(n_points,x_vals,b_vals_exclusion,0,0,b_down_bars2_exclusion,b_up_bars2_exclusion);
 m_exclusion_b_band_graph_2sigma->SetFillColor(kYellow);
 m_exclusion_b_band_graph_2sigma->SetFillStyle(3001);
 m_exclusion_b_band_graph_2sigma->SetLineColor(kYellow);
 m_exclusion_b_band_graph_2sigma->SetMarkerColor(kYellow);
//  m_exclusion_b_band_graph_2sigma->GetYaxis()->SetTitle("R = #frac{#sigma^{95%}_{no Higgs}}{#sigma_{Higgs}}");
//  m_exclusion_b_band_graph_2sigma->GetYaxis()->SetTitle("R = 95% CL Limit / FP");
//  if (FP==1) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetTitle("R = 95% CL Limit / FP");
//  else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetTitle("R = 95% CL Limit / SM");
 if (FP==1) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetTitle("95% CL limit on #sigma / #sigma_{FP}");
 else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetTitle("95% CL limit on #sigma / #sigma_{SM}");
 
//  TLegend* m_exclusion_legend = new TLegend(0.75,0.78,0.98,0.98);
//  TLegend* m_exclusion_legend = new TLegend(0.35,0.68,0.58,0.88);
 TLegend* m_exclusion_legend = new TLegend(0.27,0.74,0.50,0.94);
 m_exclusion_legend->SetName("R Exclusion");
 m_exclusion_legend->SetLineColor(kWhite);
// m_exclusion_legend->SetHeader("R Exclusion");
 m_exclusion_legend->SetFillColor(0);
 if (Bayes == 1) {
  m_exclusion_legend->AddEntry(m_exclusion_DATA_BAYES_line_graph,"Bayesian observed");
 }
 m_exclusion_legend->AddEntry(m_exclusion_b_line_graph,"median expected");
 m_exclusion_legend->AddEntry(m_exclusion_b_band_graph_1sigma,"expected #pm 1#sigma");
 m_exclusion_legend->AddEntry(m_exclusion_b_band_graph_2sigma,"expected #pm 2#sigma");
 if (Data != 0) {
  m_exclusion_legend->AddEntry( m_exclusion_DATA_line_graph,"observed");
 }
 
 cExclusion->SetGridx();
 cExclusion->SetGridy();
  
 m_exclusion_b_band_graph_2sigma->Draw("A30");
 m_exclusion_b_band_graph_2sigma->SetTitle("");
//  m_exclusion_b_band_graph_2sigma->GetXaxis()->SetTitle("Higgs mass (GeV/c^{2})");
 m_exclusion_b_band_graph_2sigma->GetXaxis()->SetTitle("Higgs mass (GeV)");
 m_exclusion_b_band_graph_1sigma->Draw("30");
 
 if (Data != 0) {
   m_exclusion_DATA_line_graph->Draw("PL");
 }

 if (Bayes == 1) {
  m_exclusion_DATA_BAYES_line_graph->Draw("LP");
 }
 
 m_exclusion_b_line_graph->Draw("LP");
 m_exclusion_legend->Draw();
 
 
 
 float LUMI = 19.5;
 TString EXTRALABEL = Form ("#sqrt{s} = 8 TeV");

 TLatex* luminosity;
 if (bigCombination == 0)      luminosity = new TLatex(0.50, 0.88, TString::Format("#splitline{CMS preliminary}{L = %.1f fb^{-1} %s}",LUMI,EXTRALABEL.Data()));
 else if (bigCombination == 4) luminosity = new TLatex(0.50, 0.88, TString::Format("#splitline{CMS preliminary}{#splitline{L = 4.9 fb^{-1}}{#sqrt{s} = 7 TeV}}"));
 else if (bigCombination == 5) luminosity = new TLatex(0.50, 0.88, TString::Format("#splitline{CMS preliminary}{L = %.1f fb^{-1} %s}",LUMI,EXTRALABEL.Data()));
 else                          luminosity = new TLatex(0.50, 0.88, TString::Format("#splitline{CMS preliminary}{#splitline{L = 4.9 + 19.5 fb^{-1}}{#sqrt{s} = 7/8 TeV}}"));
 
 luminosity->SetNDC();
 luminosity->SetTextAlign(12);
 luminosity->SetTextFont(42);
 luminosity->SetTextSize(0.04);
 luminosity->Draw("same");

 
 
 
 
//  TLine oriz(125,1,200,1);
//  oriz.SetLineWidth(4);
//  oriz.SetLineColor(kRed);
//  oriz.Draw();
 
 TText number(120,0.8,"1");
 number.SetTextColor(kRed);
//  number.Draw();
 
 m_exclusion_b_band_graph_2sigma->GetXaxis()->SetRangeUser(x_vals[0],x_vals[n_points-1]);
//  m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.1,25);
 
 if (bigCombination == 1) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,15.);
 else if  (bigCombination == 2) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,35.);
 else if  (bigCombination == 4) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,30.);
 else if  (bigCombination == 5) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,30.); // WHSC good
 //  else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,30.);  //----> VH
 else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,200.);
 //   else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.1,20.);
//  else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,20.);
//  else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.1,30.);
//  else m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,50.);
 
 cExclusion->Write();
 m_exclusion_b_line_graph->Write();
 m_exclusion_b_band_graph_1sigma->Write();
 m_exclusion_b_band_graph_2sigma->Write();
 
 TF1* f = new TF1("f", "1.", x_vals[0],x_vals[n_points-1]);
 f->SetLineColor(kRed);
 f->Draw("same"); 
 gPad->Update();
 cExclusion->SaveAs("cExclusion_lin.png");
 cExclusion->SaveAs("cExclusion_lin.pdf");
 cExclusion->SaveAs("cExclusion_lin.png");
 cExclusion->SaveAs("cExclusion_lin.pdf");
 
 gPad->SetLogy();
 
 cExclusion->SaveAs("cExclusion.png");
 cExclusion->SaveAs("cExclusion.pdf");
 cExclusion->SaveAs("cExclusion.png");
 cExclusion->SaveAs("cExclusion.pdf");
 
 
 gPad->SetLogy(0);
//  m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.1,10.);
//  m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.1,15.); //----> result
//  m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,35.); //----> VH
 
 if  (bigCombination == 5) m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,30.); //----> WHSC good
 else                      m_exclusion_b_band_graph_2sigma->GetYaxis()->SetRangeUser(0.4,200.); //----> WHSC
 m_exclusion_b_band_graph_2sigma->GetXaxis()->SetRangeUser(x_vals[0],140);
 cExclusion->SaveAs("cExclusion_lin_zoom.png");
 cExclusion->SaveAs("cExclusion_lin_zoom.pdf");
 
 
 
 
 
 
 
 
 
 ///---- exclusion ---- log X-axis ----
 TCanvas *cExclusionLog = new TCanvas("cExclusionLog","cExclusionLog", 1000, 700);
  
 Double_t xlow   = x_vals[0];
 Double_t xup    = x_vals[n_points-1];
 Int_t    nbinsx = Int_t(xup - xlow);
 TH1F* h2 = new TH1F("h2", "h2", nbinsx, xlow, xup);
 h2->GetXaxis()->SetMoreLogLabels();
 h2->GetXaxis()->SetNoExponent();
 h2->SetTitle("");

 h2->GetXaxis()->SetTitle("Higgs mass (GeV)");
 if (FP==1)  h2->GetYaxis()->SetTitle("95% CL limit on #sigma / #sigma_{FP}");
 else        h2->GetYaxis()->SetTitle("95% CL limit on #sigma / #sigma_{SM}");
 
//  h2->GetYaxis()->SetRangeUser(0.1,25.);
 
 if (bigCombination == 1) h2->GetYaxis()->SetRangeUser(0.4,15.);
 else if  (bigCombination == 5) h2->GetYaxis()->SetRangeUser(0.4,30.); // WHSC good
//  else h2->GetYaxis()->SetRangeUser(0.4,50.);
//  else h2->GetYaxis()->SetRangeUser(0.1,20.); //----> result
//  else h2->GetYaxis()->SetRangeUser(0.4,30.); //----> VH
 else h2->GetYaxis()->SetRangeUser(0.4,200.); //----> WHSC
 
 h2->GetYaxis()->SetTitleOffset(1);
 h2->Draw();
 // http://root.cern.ch/root/html/TF1.html#TF1:TF1@1
 // http://root.cern.ch/root/html/TFormula.html#TFormula:Analyze
 TF1 *f_h2_log10_x_axis = 0;
 f_h2_log10_x_axis = new TF1("f_h2_log10_x_axis", // name
                              "log10(x)", // formula
                               h2->GetXaxis()->GetXmin(), // xmin
                               h2->GetXaxis()->GetXmax()); // xmax
 
 // http://root.cern.ch/root/html/TGaxis.html#TGaxis:TGaxis@3
 // http://root.cern.ch/root/html/TGaxis.html#TGaxis:PaintAxis
 TGaxis *a = new TGaxis(h2->GetXaxis()->GetXmin(), // xmin
                        h2->GetYaxis()->GetXmin(), // ymin
                        h2->GetXaxis()->GetXmax(), // xmax
                        h2->GetYaxis()->GetXmin(), // ymax
                        "f_h2_log10_x_axis", // funcname
                        50206, // ndiv (try 100006 or 506, don't try 1006)
                        "BS", // chopt (try "BS" or "UBS")
                        0.0); // gridlength
 // a->SetTickSize(h2->GetTickLength("X")); // use "the same" size
 a->SetTickSize(1.5 * h2->GetTickLength("X")); // make it bigger
 h2->SetTickLength(0.0, "X"); // get rid of "original" ticks
 if (!(TString(a->GetOption())).Contains("U")) {
  a->SetLabelFont(h2->GetLabelFont("X")); // use "the same" font
  a->SetLabelSize(h2->GetLabelSize("X")); // use "the same" size
  a->SetLabelOffset(0.015); // use "the same" size
  h2->SetLabelSize(0.0, "X"); // get rid of "original" labels
 }
 a->SetNdivisions(909);
 a->Draw();
 gPad->Modified(); gPad->Update(); // make sure it's redrawn
 
 gPad->SetLogx();  // ----> needed to have concordance between axis and points! ----> always check!!!
 gPad->SetLogy();
 
 cExclusionLog->SetGridx();
 cExclusionLog->SetGridy();
 
 
 m_exclusion_b_band_graph_2sigma->Draw("30");
 m_exclusion_b_band_graph_1sigma->Draw("30");
 
 if (Data != 0) {
  m_exclusion_DATA_line_graph->Draw("PL");
 } 
 if (Bayes == 1) {
  m_exclusion_DATA_BAYES_line_graph->Draw("LP");
 }
 m_exclusion_b_line_graph->Draw("LP");
 m_exclusion_legend->Draw();
 luminosity->Draw("same");
//  oriz.Draw();
//  number.Draw();
 f->Draw("same");
 
 
 
 cExclusionLog->SaveAs("cExclusionLog.png");
 cExclusionLog->SaveAs("cExclusionLog.pdf");
 
 std::cout << std::endl;
 std::cout << std::endl;

 
}











// Double_t xlow   = 99.999;
// Double_t xup    = 300.01; // try 400.01 or 150.01
// Int_t    nbinsx = Int_t(xup - xlow);
// TH1F* h2 = new TH1F("h2", "h2", nbinsx, xlow, xup);
// h2->GetXaxis()->SetMoreLogLabels();
// h2->GetXaxis()->SetNoExponent();
// h2->SetTitle("");
// h2->GetXaxis()->SetTitle("m_{H} [GeV]");
// h2->GetYaxis()->SetTitle("significance");
// //h2->GetXaxis()->SetRangeUser(100,610);
// h2->GetYaxis()->SetRangeUser(0.,20.);
// h2->GetYaxis()->SetTitleOffset(1);
// //if (mH==200) h2->GetYaxis()->SetRangeUser(0.,10.);
// h2->Draw();
// // http://root.cern.ch/root/html/TF1.html#TF1:TF1@1
// // http://root.cern.ch/root/html/TFormula.html#TFormula:Analyze
// TF1 *f_h2_log10_x_axis = 0;
// f_h2_log10_x_axis = new TF1("f_h2_log10_x_axis", // name
//                             "log10(x)", // formula
//                             h2->GetXaxis()->GetXmin(), // xmin
//                             h2->GetXaxis()->GetXmax()); // xmax
// // http://root.cern.ch/root/html/TGaxis.html#TGaxis:TGaxis@3
// // http://root.cern.ch/root/html/TGaxis.html#TGaxis:PaintAxis
// TGaxis *a = new TGaxis(h2->GetXaxis()->GetXmin(), // xmin
//                        h2->GetYaxis()->GetXmin(), // ymin
//                        h2->GetXaxis()->GetXmax(), // xmax
//                        h2->GetYaxis()->GetXmin(), // ymax
//                        "f_h2_log10_x_axis", // funcname
//                        50206, // ndiv (try 100006 or 506, don't try 1006)
//                        "BS", // chopt (try "BS" or "UBS")
//                        0.0); // gridlength
// // a->SetTickSize(h2->GetTickLength("X")); // use "the same" size
// a->SetTickSize(1.5 * h2->GetTickLength("X")); // make it bigger
// h2->SetTickLength(0.0, "X"); // get rid of "original" ticks
// if (!(TString(a->GetOption())).Contains("U")) {
//  a->SetLabelFont(h2->GetLabelFont("X")); // use "the same" font
//  a->SetLabelSize(h2->GetLabelSize("X")); // use "the same" size
//  a->SetLabelOffset(0.015); // use "the same" size
//  h2->SetLabelSize(0.0, "X"); // get rid of "original" labels
// }
// a->Draw();
// gPad->Modified(); gPad->Update(); // make sure it's redrawn

