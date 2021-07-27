#include <stdio.h>
#include<fstream>
#include <vector>
#include <string>
#include <map>
#include<iostream>
using namespace std;
void overlay_plots(string file_10, string file_50, string file_100, string file_400,string file_1000, string file_1200, string file_1500, string file_1800,string file_2000, string file_2200,string file_2300,string file_2340   )
{
  char* hname = new char[200];
  char* hist_name = new char[200];
  char* hist_name1 = new char[200];
  char* hist_name2 = new char[200];
  char* hist_name3 = new char[200];
  char* hist_name4 = new char[200];
  char* hist_name_Jet = new char[200];
  char* hist_name_Jet1 = new char[200];
  char* hist_name_Jet2 = new char[200];
  char* hist_name_Jet3 = new char[200];
  char* hist_name_Jet4 = new char[200];
  char* hist_name_Met = new char[200];
  char* hist_name_Met1 = new char[200];
  char* hist_name_Met2 = new char[200];
  char* hist_name_Met3 = new char[200];
  char* hist_name_Met4 = new char[200];
  char* hist_name_Ex_Met = new char[200];
  char* hist_name_Ex_Met1 = new char[200];
  char* hist_name_Ex_Met2 = new char[200];
  char* hist_name_Ex_Met3 = new char[200];
  char* hist_name_Ex_Met4 = new char[200];
  sprintf(hist_name,"h_NJets_LepIsoVeto");
  sprintf(hist_name1,"h_NbJets_LepIsoVeto");
  sprintf(hist_name2,"h_Met_LepIsoVeto");
  sprintf(hist_name3,"h_PhoPt_LepIsoVeto");
  sprintf(hist_name4,"h_HT_LepIsoVeto");

  sprintf(hist_name_Jet,"h_NJets_aJetcut");
  sprintf(hist_name_Jet1,"h_NbJets_aJetcut");
  sprintf(hist_name_Jet2,"h_Met_aJetcut");
  sprintf(hist_name_Jet3,"h_PhoPt_aJetcut");
  sprintf(hist_name_Jet4,"h_HT_aJetcut");

  sprintf(hist_name_Met,"h_NJets_aMetcut");
  sprintf(hist_name_Met1,"h_NbJets_aMetcut");
  sprintf(hist_name_Met2,"h_Met_aMetcut");
  sprintf(hist_name_Met3,"h_PhoPt_aMetcut");
  sprintf(hist_name_Met4,"h_HT_aMetcut");
  
  sprintf(hist_name_Ex_Met,"h_NJets_ExMET");
  sprintf(hist_name_Ex_Met1,"h_NbJets_ExMET");
  sprintf(hist_name_Ex_Met2,"h_Met_ExMET");
  sprintf(hist_name_Ex_Met3,"h_PhoPt_ExMET");
  sprintf(hist_name_Ex_Met4,"h_HT_ExMET");

  

  char* title=new char[2000];
  char* full_path = new char[2000];
  char* hname1 = new char[2000];
  char* hname2 = new char[2000];
  char* hname3 = new char[2000];
  char* hname4 = new char[2000];
  char* hname5 = new char[2000];
  char* hname6 = new char[2000];
  char* hname7 = new char[2000];
  char* hname8 = new char[2000];
  char* hname9 = new char[2000];
  char* hname10 = new char[2000];
  char* hname11 = new char[2000];

  char* name = new char[2000];
  char* png_path = new char[2000];
  char* full_path_Photpt = new char[2000];
  char* full_path_Njets = new char[2000];
  char* full_path_NBjets = new char[2000];
  char* full_path_Met=new char[2000];
  char* full_path_HT=new char[2000];

  char* full_path_Met_Photpt = new char[2000];
  char* full_path_Met_Njets = new char[2000];
  char* full_path_Met_NBjets = new char[2000];
  char* full_path_Met_Met=new char[2000];
  char* full_path_Met_HT=new char[2000];
  char* full_path_Jet_Photpt = new char[2000];
  char* full_path_Jet_Njets = new char[2000];
  char* full_path_Jet_NBjets = new char[2000];
  char* full_path_Jet_Met=new char[2000];
  char* full_path_Jet_HT=new char[2000];
  char* full_path_Ex_Met_Photpt = new char[2000];
  char* full_path_Ex_Met_Njets = new char[2000];
  char* full_path_Ex_Met_NBjets = new char[2000];
  char* full_path_Ex_Met_Met=new char[2000];
  char* full_path_Ex_Met_HT=new char[2000];

  
  char* path2 = new char[2000];
  
  sprintf(hname,"%s",file_10.c_str());
  sprintf(hname1,"%s",file_50.c_str());
  sprintf(hname2,"%s",file_100.c_str());
  sprintf(hname3,"%s",file_400.c_str());
  sprintf(hname4,"%s",file_1000.c_str());
  sprintf(hname5,"%s",file_1200.c_str());
  sprintf(hname6,"%s",file_1500.c_str());
  sprintf(hname7,"%s",file_1800.c_str());
  sprintf(hname8,"%s",file_2000.c_str());
  sprintf(hname9,"%s",file_2200.c_str());
  sprintf(hname10,"%s",file_2300.c_str());
  sprintf(hname11,"%s",file_2340.c_str());
  
  TFile * inputfile_10 = new TFile(hname,"READ");
  TFile * inputfile_50 = new TFile(hname1,"READ");
  TFile * inputfile_100 = new TFile(hname2,"READ");
  TFile * inputfile_400 = new TFile(hname3,"READ");
  TFile * inputfile_1000 = new TFile(hname4,"READ");
  TFile * inputfile_1200 = new TFile(hname5,"READ");
  TFile * inputfile_1500 = new TFile(hname6,"READ");
  TFile * inputfile_1800 = new TFile(hname7,"READ");
  TFile * inputfile_2000 = new TFile(hname8,"READ");
  TFile * inputfile_2200 = new TFile(hname9,"READ");
  TFile * inputfile_2300 = new TFile(hname10,"READ");
  TFile * inputfile_2340 = new TFile(hname11,"READ");


  
  sprintf(path2,"Results",file_10.c_str());
  sprintf(full_path_Photpt,"%s/Overlay_PhotonPt_LepISoVeto.png",path2);
  sprintf(full_path_Njets,"%s/Overlay_Njets_LepISoVeto.png",path2);
  sprintf(full_path_NBjets,"%s/Overlay_NBjets_LepISoVeto.png",path2);
  sprintf(full_path_Met,"%s/Overlay_Met_LepISoVeto.png",path2);
  sprintf(full_path_HT,"%s/Overlay_HT_LepISoVeto.png",path2);

  sprintf(full_path_Met_Photpt,"%s/Overlay_PhotonPt_AMetCut.png",path2);
  sprintf(full_path_Met_Njets,"%s/Overlay_Njets_AMetCut.png",path2);
  sprintf(full_path_Met_NBjets,"%s/Overlay_NBjets_AMetCut.png",path2);
  sprintf(full_path_Met_Met,"%s/Overlay_Met_AMetCut.png",path2);
  sprintf(full_path_Met_HT,"%s/Overlay_HT_AMetCut.png",path2);

  sprintf(full_path_Jet_Photpt,"%s/Overlay_PhotonPt_AJetCut.png",path2);
  sprintf(full_path_Jet_Njets,"%s/Overlay_Njets_AJetCut.png",path2);
  sprintf(full_path_Jet_NBjets,"%s/Overlay_NBjets_AJetCut.png",path2);
  sprintf(full_path_Jet_Met,"%s/Overlay_Met_AJetCut.png",path2);
  sprintf(full_path_Jet_HT,"%s/Overlay_HT_AJetCut.png",path2);

  sprintf(full_path_Ex_Met_Photpt,"%s/Overlay_PhotonPt_AEx_MetCut.png",path2);
  sprintf(full_path_Ex_Met_Njets,"%s/Overlay_Njets_AEx_MetCut.png",path2);
  sprintf(full_path_Ex_Met_NBjets,"%s/Overlay_NBjets_AEx_MetCut.png",path2);
  sprintf(full_path_Ex_Met_Met,"%s/Overlay_Met_AEx_MetCut.png",path2);
  sprintf(full_path_Ex_Met_HT,"%s/Overlay_HT_AEx_MetCut.png",path2);

  TH1F* resp_Njets_LepIsoVeto_10=(TH1F*)inputfile_10->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_10=(TH1F*)inputfile_10->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_10=(TH1F*)inputfile_10->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_10=(TH1F*)inputfile_10->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_10=(TH1F*)inputfile_10->Get(hist_name_Met4);
  //normalizing the histograms
  Double_t factor = 1.;
  // resp_Njets_LepIsoVeto_10->Scale(factor/resp_Njets_LepIsoVeto_10->Integral());
  // resp_NbJets_LepIsoVeto_10->Scale(factor/resp_NbJets_LepIsoVeto_10->Integral());
  // resp_Met_LepIsoVeto_10->Scale(factor/resp_Met_LepIsoVeto_10->Integral());
  // resp_PhotPt_LepIsoVeto_10->Scale(factor/resp_PhotPt_LepIsoVeto_10->Integral());
  // resp_HT_LepIsoVeto_10->Scale(factor/resp_HT_LepIsoVeto_10->Integral());

  //Setting the line colours for different histograms,
  resp_Njets_LepIsoVeto_10->SetLineColorAlpha(kBlue,0.9);
  resp_Njets_LepIsoVeto_10->SetLineWidth(2);
  resp_Njets_LepIsoVeto_10->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_10->SetLineColorAlpha(kBlue,0.9);
  resp_NbJets_LepIsoVeto_10->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_10->SetLineStyle(1);
  
  resp_Met_LepIsoVeto_10->SetLineColorAlpha(kBlue,0.9);
  resp_Met_LepIsoVeto_10->SetLineWidth(2);
  resp_Met_LepIsoVeto_10->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_10->SetLineColorAlpha(kBlue,0.9);
  resp_PhotPt_LepIsoVeto_10->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_10->SetLineStyle(1);
  
  resp_PhotPt_LepIsoVeto_10->SetLineColorAlpha(kBlue,0.9);
  resp_PhotPt_LepIsoVeto_10->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_10->SetLineStyle(1);

  resp_HT_LepIsoVeto_10->SetLineColorAlpha(kBlue,0.9);
  resp_HT_LepIsoVeto_10->SetLineWidth(2);
  resp_HT_LepIsoVeto_10->SetLineStyle(1);


  
  TH1F* resp_Njets_LepIsoVeto_50=(TH1F*)inputfile_50->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_50=(TH1F*)inputfile_50->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_50=(TH1F*)inputfile_50->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_50=(TH1F*)inputfile_50->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_50=(TH1F*)inputfile_50->Get(hist_name_Met4);
 // resp_Njets_LepIsoVeto_50->Scale(factor/resp_Njets_LepIsoVeto_50->Integral());
 //  resp_NbJets_LepIsoVeto_50->Scale(factor/resp_NbJets_LepIsoVeto_50->Integral());
 //  resp_Met_LepIsoVeto_50->Scale(factor/resp_Met_LepIsoVeto_50->Integral());
 //  resp_PhotPt_LepIsoVeto_50->Scale(factor/resp_PhotPt_LepIsoVeto_50->Integral());
 //  resp_HT_LepIsoVeto_50->Scale(factor/resp_HT_LepIsoVeto_50->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_50->SetLineColorAlpha(kRed,0.9);
  resp_Njets_LepIsoVeto_50->SetLineWidth(2);
  resp_Njets_LepIsoVeto_50->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_50->SetLineColorAlpha(kRed,0.9);
  resp_NbJets_LepIsoVeto_50->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_50->SetLineStyle(1);

  resp_Met_LepIsoVeto_50->SetLineColorAlpha(kRed,0.9);
  resp_Met_LepIsoVeto_50->SetLineWidth(2);
  resp_Met_LepIsoVeto_50->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_50->SetLineColorAlpha(kRed,0.9);
  resp_PhotPt_LepIsoVeto_50->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_50->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_50->SetLineColorAlpha(kRed,0.9);
  resp_PhotPt_LepIsoVeto_50->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_50->SetLineStyle(1);

  resp_HT_LepIsoVeto_50->SetLineColorAlpha(kRed,0.9);
  resp_HT_LepIsoVeto_50->SetLineWidth(2);
  resp_HT_LepIsoVeto_50->SetLineStyle(1);

  TH1F* resp_Njets_LepIsoVeto_100=(TH1F*)inputfile_100->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_100=(TH1F*)inputfile_100->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_100=(TH1F*)inputfile_100->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_100=(TH1F*)inputfile_100->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_100=(TH1F*)inputfile_100->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_100->Scale(factor/resp_Njets_LepIsoVeto_100->Integral());
  // resp_NbJets_LepIsoVeto_100->Scale(factor/resp_NbJets_LepIsoVeto_100->Integral());
  // resp_Met_LepIsoVeto_100->Scale(factor/resp_Met_LepIsoVeto_100->Integral());
  // resp_PhotPt_LepIsoVeto_100->Scale(factor/resp_PhotPt_LepIsoVeto_100->Integral());
  // resp_HT_LepIsoVeto_100->Scale(factor/resp_HT_LepIsoVeto_100->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_100->SetLineColorAlpha(kGreen,0.9);
  resp_Njets_LepIsoVeto_100->SetLineWidth(2);
  resp_Njets_LepIsoVeto_100->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_100->SetLineColorAlpha(kGreen,0.9);
  resp_NbJets_LepIsoVeto_100->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_100->SetLineStyle(1);

  resp_Met_LepIsoVeto_100->SetLineColorAlpha(kGreen,0.9);
  resp_Met_LepIsoVeto_100->SetLineWidth(2);
  resp_Met_LepIsoVeto_100->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_100->SetLineColorAlpha(kGreen,0.9);
  resp_PhotPt_LepIsoVeto_100->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_100->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_100->SetLineColorAlpha(kGreen,0.9);
  resp_PhotPt_LepIsoVeto_100->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_100->SetLineStyle(1);

  resp_HT_LepIsoVeto_100->SetLineColorAlpha(kGreen,0.9);
  resp_HT_LepIsoVeto_100->SetLineWidth(2);
  resp_HT_LepIsoVeto_100->SetLineStyle(1);

  TH1F* resp_Njets_LepIsoVeto_400=(TH1F*)inputfile_400->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_400=(TH1F*)inputfile_400->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_400=(TH1F*)inputfile_400->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_400=(TH1F*)inputfile_400->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_400=(TH1F*)inputfile_400->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_400->Scale(factor/resp_Njets_LepIsoVeto_400->Integral());
  // resp_NbJets_LepIsoVeto_400->Scale(factor/resp_NbJets_LepIsoVeto_400->Integral());
  // resp_Met_LepIsoVeto_400->Scale(factor/resp_Met_LepIsoVeto_400->Integral());
  // resp_PhotPt_LepIsoVeto_400->Scale(factor/resp_PhotPt_LepIsoVeto_400->Integral());
  // resp_HT_LepIsoVeto_400->Scale(factor/resp_HT_LepIsoVeto_400->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_400->SetLineColorAlpha(kPink+3,0.9);
  resp_Njets_LepIsoVeto_400->SetLineWidth(2);
  resp_Njets_LepIsoVeto_400->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_400->SetLineColorAlpha(kPink+3,0.9);
  resp_NbJets_LepIsoVeto_400->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_400->SetLineStyle(1);

  resp_Met_LepIsoVeto_400->SetLineColorAlpha(kPink+3,0.9);
  resp_Met_LepIsoVeto_400->SetLineWidth(2);
  resp_Met_LepIsoVeto_400->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_400->SetLineColorAlpha(kPink+3,0.9);
  resp_PhotPt_LepIsoVeto_400->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_400->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_400->SetLineColorAlpha(kPink+3,0.9);
  resp_PhotPt_LepIsoVeto_400->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_400->SetLineStyle(1);

  resp_HT_LepIsoVeto_400->SetLineColorAlpha(kPink+3,0.9);
  resp_HT_LepIsoVeto_400->SetLineWidth(2);
  resp_HT_LepIsoVeto_400->SetLineStyle(1);

  
   TH1F* resp_Njets_LepIsoVeto_1000=(TH1F*)inputfile_1000->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_1000=(TH1F*)inputfile_1000->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_1000=(TH1F*)inputfile_1000->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_1000=(TH1F*)inputfile_1000->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_1000=(TH1F*)inputfile_1000->Get(hist_name_Met4);
  //  resp_Njets_LepIsoVeto_1000->Scale(factor/resp_Njets_LepIsoVeto_1000->Integral());
  // resp_NbJets_LepIsoVeto_1000->Scale(factor/resp_NbJets_LepIsoVeto_1000->Integral());
  // resp_Met_LepIsoVeto_1000->Scale(factor/resp_Met_LepIsoVeto_1000->Integral());
  // resp_PhotPt_LepIsoVeto_1000->Scale(factor/resp_PhotPt_LepIsoVeto_1000->Integral());
  // resp_HT_LepIsoVeto_1000->Scale(factor/resp_HT_LepIsoVeto_1000->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_1000->SetLineColorAlpha(kGray+2,0.9);
  resp_Njets_LepIsoVeto_1000->SetLineWidth(2);
  resp_Njets_LepIsoVeto_1000->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_1000->SetLineColorAlpha(kGray+2,0.9);
  resp_NbJets_LepIsoVeto_1000->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_1000->SetLineStyle(1);

  resp_Met_LepIsoVeto_1000->SetLineColorAlpha(kGray+2,0.9);
  resp_Met_LepIsoVeto_1000->SetLineWidth(2);
  resp_Met_LepIsoVeto_1000->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1000->SetLineColorAlpha(kGray+2,0.9);
  resp_PhotPt_LepIsoVeto_1000->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1000->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1000->SetLineColorAlpha(kGray+2,0.9);
  resp_PhotPt_LepIsoVeto_1000->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1000->SetLineStyle(1);

  resp_HT_LepIsoVeto_1000->SetLineColorAlpha(kGray+2,0.9);
  resp_HT_LepIsoVeto_1000->SetLineWidth(2);
  resp_HT_LepIsoVeto_1000->SetLineStyle(1);

 TH1F* resp_Njets_LepIsoVeto_1200=(TH1F*)inputfile_1200->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_1200=(TH1F*)inputfile_1200->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_1200=(TH1F*)inputfile_1200->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_1200=(TH1F*)inputfile_1200->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_1200=(TH1F*)inputfile_1200->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_1200->Scale(factor/resp_Njets_LepIsoVeto_1200->Integral());
  // resp_NbJets_LepIsoVeto_1200->Scale(factor/resp_NbJets_LepIsoVeto_1200->Integral());
  // resp_Met_LepIsoVeto_1200->Scale(factor/resp_Met_LepIsoVeto_1200->Integral());
  // resp_PhotPt_LepIsoVeto_1200->Scale(factor/resp_PhotPt_LepIsoVeto_1200->Integral());
  // resp_HT_LepIsoVeto_1200->Scale(factor/resp_HT_LepIsoVeto_1200->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_1200->SetLineColorAlpha(kGreen,0.9);
  resp_Njets_LepIsoVeto_1200->SetLineWidth(2);
  resp_Njets_LepIsoVeto_1200->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_1200->SetLineColorAlpha(kGreen,0.9);
  resp_NbJets_LepIsoVeto_1200->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_1200->SetLineStyle(1);

  resp_Met_LepIsoVeto_1200->SetLineColorAlpha(kGreen,0.9);
  resp_Met_LepIsoVeto_1200->SetLineWidth(2);
  resp_Met_LepIsoVeto_1200->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1200->SetLineColorAlpha(kGreen,0.9);
  resp_PhotPt_LepIsoVeto_1200->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1200->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1200->SetLineColorAlpha(kGreen,0.9);
  resp_PhotPt_LepIsoVeto_1200->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1200->SetLineStyle(1);

  resp_HT_LepIsoVeto_1200->SetLineColorAlpha(kGreen,0.9);
  resp_HT_LepIsoVeto_1200->SetLineWidth(2);
  resp_HT_LepIsoVeto_1200->SetLineStyle(1);

   TH1F* resp_Njets_LepIsoVeto_1500=(TH1F*)inputfile_1500->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_1500=(TH1F*)inputfile_1500->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_1500=(TH1F*)inputfile_1500->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_1500=(TH1F*)inputfile_1500->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_1500=(TH1F*)inputfile_1500->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_1500->Scale(factor/resp_Njets_LepIsoVeto_1500->Integral());
  // resp_NbJets_LepIsoVeto_1500->Scale(factor/resp_NbJets_LepIsoVeto_1500->Integral());
  // resp_Met_LepIsoVeto_1500->Scale(factor/resp_Met_LepIsoVeto_1500->Integral());
  // resp_PhotPt_LepIsoVeto_1500->Scale(factor/resp_PhotPt_LepIsoVeto_1500->Integral());
  // resp_HT_LepIsoVeto_1500->Scale(factor/resp_HT_LepIsoVeto_1500->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_1500->SetLineColorAlpha(kGray,0.9);
  resp_Njets_LepIsoVeto_1500->SetLineWidth(2);
  resp_Njets_LepIsoVeto_1500->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_1500->SetLineColorAlpha(kGray,0.9);
  resp_NbJets_LepIsoVeto_1500->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_1500->SetLineStyle(1);

  resp_Met_LepIsoVeto_1500->SetLineColorAlpha(kGray,0.9);
  resp_Met_LepIsoVeto_1500->SetLineWidth(2);
  resp_Met_LepIsoVeto_1500->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1500->SetLineColorAlpha(kGray,0.9);
  resp_PhotPt_LepIsoVeto_1500->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1500->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1500->SetLineColorAlpha(kGray,0.9);
  resp_PhotPt_LepIsoVeto_1500->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1500->SetLineStyle(1);

  resp_HT_LepIsoVeto_1500->SetLineColorAlpha(kGray,0.9);
  resp_HT_LepIsoVeto_1500->SetLineWidth(2);
  resp_HT_LepIsoVeto_1500->SetLineStyle(1);

   TH1F* resp_Njets_LepIsoVeto_1800=(TH1F*)inputfile_1800->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_1800=(TH1F*)inputfile_1800->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_1800=(TH1F*)inputfile_1800->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_1800=(TH1F*)inputfile_1800->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_1800=(TH1F*)inputfile_1800->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_1800->Scale(factor/resp_Njets_LepIsoVeto_1800->Integral());
  // resp_NbJets_LepIsoVeto_1800->Scale(factor/resp_NbJets_LepIsoVeto_1800->Integral());
  // resp_Met_LepIsoVeto_1800->Scale(factor/resp_Met_LepIsoVeto_1800->Integral());
  // resp_PhotPt_LepIsoVeto_1800->Scale(factor/resp_PhotPt_LepIsoVeto_1800->Integral());
  // resp_HT_LepIsoVeto_1800->Scale(factor/resp_HT_LepIsoVeto_1800->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_1800->SetLineColorAlpha(kCyan,0.9);
  resp_Njets_LepIsoVeto_1800->SetLineWidth(2);
  resp_Njets_LepIsoVeto_1800->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_1800->SetLineColorAlpha(kCyan,0.9);
  resp_NbJets_LepIsoVeto_1800->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_1800->SetLineStyle(1);

  resp_Met_LepIsoVeto_1800->SetLineColorAlpha(kCyan,0.9);
  resp_Met_LepIsoVeto_1800->SetLineWidth(2);
  resp_Met_LepIsoVeto_1800->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1800->SetLineColorAlpha(kCyan,0.9);
  resp_PhotPt_LepIsoVeto_1800->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1800->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_1800->SetLineColorAlpha(kCyan,0.9);
  resp_PhotPt_LepIsoVeto_1800->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_1800->SetLineStyle(1);

  resp_HT_LepIsoVeto_1800->SetLineColorAlpha(kCyan,0.9);
  resp_HT_LepIsoVeto_1800->SetLineWidth(2);
  resp_HT_LepIsoVeto_1800->SetLineStyle(1);

   TH1F* resp_Njets_LepIsoVeto_2000=(TH1F*)inputfile_2000->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_2000=(TH1F*)inputfile_2000->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_2000=(TH1F*)inputfile_2000->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_2000=(TH1F*)inputfile_2000->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_2000=(TH1F*)inputfile_2000->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_2000->Scale(factor/resp_Njets_LepIsoVeto_2000->Integral());
  // resp_NbJets_LepIsoVeto_2000->Scale(factor/resp_NbJets_LepIsoVeto_2000->Integral());
  // resp_Met_LepIsoVeto_2000->Scale(factor/resp_Met_LepIsoVeto_2000->Integral());
  // resp_PhotPt_LepIsoVeto_2000->Scale(factor/resp_PhotPt_LepIsoVeto_2000->Integral());
  // resp_HT_LepIsoVeto_2000->Scale(factor/resp_HT_LepIsoVeto_2000->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_2000->SetLineColorAlpha(kViolet,0.9);
  resp_Njets_LepIsoVeto_2000->SetLineWidth(2);
  resp_Njets_LepIsoVeto_2000->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_2000->SetLineColorAlpha(kViolet,0.9);
  resp_NbJets_LepIsoVeto_2000->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_2000->SetLineStyle(1);

  resp_Met_LepIsoVeto_2000->SetLineColorAlpha(kViolet,0.9);
  resp_Met_LepIsoVeto_2000->SetLineWidth(2);
  resp_Met_LepIsoVeto_2000->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2000->SetLineColorAlpha(kViolet,0.9);
  resp_PhotPt_LepIsoVeto_2000->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2000->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2000->SetLineColorAlpha(kViolet,0.9);
  resp_PhotPt_LepIsoVeto_2000->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2000->SetLineStyle(1);

  resp_HT_LepIsoVeto_2000->SetLineColorAlpha(kViolet,0.9);
  resp_HT_LepIsoVeto_2000->SetLineWidth(2);
  resp_HT_LepIsoVeto_2000->SetLineStyle(1);

  TH1F* resp_Njets_LepIsoVeto_2200=(TH1F*)inputfile_2200->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_2200=(TH1F*)inputfile_2200->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_2200=(TH1F*)inputfile_2200->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_2200=(TH1F*)inputfile_2200->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_2200=(TH1F*)inputfile_2200->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_2200->Scale(factor/resp_Njets_LepIsoVeto_2200->Integral());
  // resp_NbJets_LepIsoVeto_2200->Scale(factor/resp_NbJets_LepIsoVeto_2200->Integral());
  // resp_Met_LepIsoVeto_2200->Scale(factor/resp_Met_LepIsoVeto_2200->Integral());
  // resp_PhotPt_LepIsoVeto_2200->Scale(factor/resp_PhotPt_LepIsoVeto_2200->Integral());
  // resp_HT_LepIsoVeto_2200->Scale(factor/resp_HT_LepIsoVeto_2200->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_2200->SetLineColorAlpha(kOrange+10,0.9);
  resp_Njets_LepIsoVeto_2200->SetLineWidth(2);
  resp_Njets_LepIsoVeto_2200->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_2200->SetLineColorAlpha(kOrange+10,0.9);
  resp_NbJets_LepIsoVeto_2200->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_2200->SetLineStyle(1);

  resp_Met_LepIsoVeto_2200->SetLineColorAlpha(kOrange+10,0.9);
  resp_Met_LepIsoVeto_2200->SetLineWidth(2);
  resp_Met_LepIsoVeto_2200->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2200->SetLineColorAlpha(kOrange+10,0.9);
  resp_PhotPt_LepIsoVeto_2200->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2200->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2200->SetLineColorAlpha(kOrange+10,0.9);
  resp_PhotPt_LepIsoVeto_2200->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2200->SetLineStyle(1);

  resp_HT_LepIsoVeto_2200->SetLineColorAlpha(kOrange+10,0.9);
  resp_HT_LepIsoVeto_2200->SetLineWidth(2);
  resp_HT_LepIsoVeto_2200->SetLineStyle(1);

   TH1F* resp_Njets_LepIsoVeto_2300=(TH1F*)inputfile_2300->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_2300=(TH1F*)inputfile_2300->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_2300=(TH1F*)inputfile_2300->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_2300=(TH1F*)inputfile_2300->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_2300=(TH1F*)inputfile_2300->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_2300->Scale(factor/resp_Njets_LepIsoVeto_2300->Integral());
  // resp_NbJets_LepIsoVeto_2300->Scale(factor/resp_NbJets_LepIsoVeto_2300->Integral());
  // resp_Met_LepIsoVeto_2300->Scale(factor/resp_Met_LepIsoVeto_2300->Integral());
  // resp_PhotPt_LepIsoVeto_2300->Scale(factor/resp_PhotPt_LepIsoVeto_2300->Integral());
  // resp_HT_LepIsoVeto_2300->Scale(factor/resp_HT_LepIsoVeto_2300->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_2300->SetLineColorAlpha(kCyan+4,0.9);
  resp_Njets_LepIsoVeto_2300->SetLineWidth(2);
  resp_Njets_LepIsoVeto_2300->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_2300->SetLineColorAlpha(kCyan+4,0.9);
  resp_NbJets_LepIsoVeto_2300->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_2300->SetLineStyle(1);

  resp_Met_LepIsoVeto_2300->SetLineColorAlpha(kCyan+4,0.9);
  resp_Met_LepIsoVeto_2300->SetLineWidth(2);
  resp_Met_LepIsoVeto_2300->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2300->SetLineColorAlpha(kCyan+4,0.9);
  resp_PhotPt_LepIsoVeto_2300->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2300->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2300->SetLineColorAlpha(kCyan+4,0.9);
  resp_PhotPt_LepIsoVeto_2300->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2300->SetLineStyle(1);

  resp_HT_LepIsoVeto_2300->SetLineColorAlpha(kCyan+4,0.9);
  resp_HT_LepIsoVeto_2300->SetLineWidth(2);
  resp_HT_LepIsoVeto_2300->SetLineStyle(1);

   TH1F* resp_Njets_LepIsoVeto_2340=(TH1F*)inputfile_2340->Get(hist_name_Met);
  TH1F* resp_NbJets_LepIsoVeto_2340=(TH1F*)inputfile_2340->Get(hist_name_Met1);
  TH1F* resp_Met_LepIsoVeto_2340=(TH1F*)inputfile_2340->Get(hist_name_Met2);
  TH1F* resp_PhotPt_LepIsoVeto_2340=(TH1F*)inputfile_2340->Get(hist_name_Met3);
  TH1F* resp_HT_LepIsoVeto_2340=(TH1F*)inputfile_2340->Get(hist_name_Met4);

  //  resp_Njets_LepIsoVeto_2340->Scale(factor/resp_Njets_LepIsoVeto_2340->Integral());
  // resp_NbJets_LepIsoVeto_2340->Scale(factor/resp_NbJets_LepIsoVeto_2340->Integral());
  // resp_Met_LepIsoVeto_2340->Scale(factor/resp_Met_LepIsoVeto_2340->Integral());
  // resp_PhotPt_LepIsoVeto_2340->Scale(factor/resp_PhotPt_LepIsoVeto_2340->Integral());
  // resp_HT_LepIsoVeto_2340->Scale(factor/resp_HT_LepIsoVeto_2340->Integral());

  //Setting the line colours for different histograms,                                                                                                                                                     
  resp_Njets_LepIsoVeto_2340->SetLineColorAlpha(kMagenta-3,0.9);
  resp_Njets_LepIsoVeto_2340->SetLineWidth(2);
  resp_Njets_LepIsoVeto_2340->SetLineStyle(1);

  resp_NbJets_LepIsoVeto_2340->SetLineColorAlpha(kMagenta-3,0.9);
  resp_NbJets_LepIsoVeto_2340->SetLineWidth(2);
  resp_NbJets_LepIsoVeto_2340->SetLineStyle(1);

  resp_Met_LepIsoVeto_2340->SetLineColorAlpha(kMagenta-3,0.9);
  resp_Met_LepIsoVeto_2340->SetLineWidth(2);
  resp_Met_LepIsoVeto_2340->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2340->SetLineColorAlpha(kMagenta-3,0.9);
  resp_PhotPt_LepIsoVeto_2340->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2340->SetLineStyle(1);

  resp_PhotPt_LepIsoVeto_2340->SetLineColorAlpha(kMagenta-3,0.9);
  resp_PhotPt_LepIsoVeto_2340->SetLineWidth(2);
  resp_PhotPt_LepIsoVeto_2340->SetLineStyle(1);

  resp_HT_LepIsoVeto_2340->SetLineColorAlpha(kMagenta-3,0.9);
  resp_HT_LepIsoVeto_2340->SetLineWidth(2);
  resp_HT_LepIsoVeto_2340->SetLineStyle(1);

  auto legend = new TLegend(0.7,0.55,0.9,0.9);
  legend->SetHeader("","C");
  legend->AddEntry(resp_Njets_LepIsoVeto_10,"Mchi2-10GeV","l");
  legend->AddEntry(resp_Njets_LepIsoVeto_50,"Mchi2-50GeV","l");
  // legend->AddEntry(resp_Njets_LepIsoVeto_100,"Mchi2-100GeV","l");
 legend->AddEntry(resp_Njets_LepIsoVeto_1200,"Mchi2-200GeV","l");
  legend->AddEntry(resp_Njets_LepIsoVeto_400,"Mchi2-400GeV","l");
  //  legend->AddEntry(resp_Njets_LepIsoVeto_1000,"Mchi2-1000GeV","l");
  // legend->AddEntry(resp_Njets_LepIsoVeto_1200,"Mchi2-1200GeV","l");
  legend->AddEntry(resp_Njets_LepIsoVeto_1500,"Mchi2-1500GeV","l");
  //legend->AddEntry(resp_Njets_LepIsoVeto_1800,"Mchi2-1800GeV","l");
  // legend->AddEntry(resp_Njets_LepIsoVeto_2000,"Mchi2-2000GeV","l");
  // legend->AddEntry(resp_Njets_LepIsoVeto_2200,"Mchi2-2200GeV","l");
  // legend->AddEntry(resp_Njets_LepIsoVeto_2300,"Mchi2-2300GeV","l");
  //legend->AddEntry(resp_Njets_LepIsoVeto_2340,"Mchi2-2350GeV","l");
  gStyle->SetLegendTextSize(0.02);

   TCanvas *Canvas_n1 = new TCanvas(hist_name_Met1, hist_name_Met1,600,600,1200,1200);
  Canvas_n1->Range(-60.5,-0.65,56.5,0.65);
  Canvas_n1->SetFillColor(0);
  Canvas_n1->SetBorderMode(0);
  Canvas_n1->SetBorderSize(2);
  //gPad->SetLogy();
  gStyle->SetOptStat(0);
  // THStack *hs_Njets = new THStack("hs_Njets","");
  // hs_Njets->Add(resp_Njets_LepIsoVeto_10);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_50);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_100);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_400);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_1000);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_1200);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_1500);
  //hs_Njets->Add(resp_Njets_LepIsoVeto_1800);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_2000);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_2200);
  // hs_Njets->Add(resp_Njets_LepIsoVeto_2300);
  //hs_Njets->Add(resp_Njets_LepIsoVeto_2340);
  // hs_Njets->Draw("hist");
  // hs_Njets->GetXaxis()->SetRange(0,20);
  // hs_Njets->GetXaxis()->SetTitle("Number of hadronic jets");

  cout << resp_Njets_LepIsoVeto_1500->Integral() << endl;
  cout << resp_Njets_LepIsoVeto_50->Integral() << endl;
  //cout << //resp_Njets_LepIsoVeto_100->Integral() << endl;
  cout << resp_Njets_LepIsoVeto_1200->Integral() << endl;
  cout << resp_Njets_LepIsoVeto_400->Integral() << endl;
  //cout << //resp_Njets_LepIsoVeto_1000->Integral() << endl;
  cout << resp_Njets_LepIsoVeto_10->Integral() << endl;
  resp_Njets_LepIsoVeto_1500->SetTitle("");
  resp_Njets_LepIsoVeto_1500->GetXaxis()->SetTitle("Number of hadronic jets");
  resp_Njets_LepIsoVeto_1500->GetXaxis()->SetRange(0,20);
  resp_Njets_LepIsoVeto_1500->Draw("hist");
  resp_Njets_LepIsoVeto_50->Draw("hist sames");
  //resp_Njets_LepIsoVeto_100->Draw("hist sames");
  resp_Njets_LepIsoVeto_1200->Draw("hist sames");
  resp_Njets_LepIsoVeto_400->Draw("hist sames");
  //resp_Njets_LepIsoVeto_1000->Draw("hist sames");
  resp_Njets_LepIsoVeto_10->Draw("hist sames");

  legend->Draw("sames");
  
  Canvas_n1->Modified();
  Canvas_n1->cd();
  Canvas_n1->SetSelected(Canvas_n1);
  Canvas_n1->SaveAs(full_path_Met_Njets);

  //N-bjets
   TCanvas *Canvas_n2 = new TCanvas(hist_name_Met2, hist_name_Met2,600,600,1200,1200);
  Canvas_n2->Range(-60.5,-0.65,56.5,0.65);
  Canvas_n2->SetFillColor(0);
  Canvas_n2->SetBorderMode(0);
  Canvas_n2->SetBorderSize(2);
  //gPad->SetLogy();
  gStyle->SetOptStat(0);
  // THStack *hs_Nbjets = new THStack("hs_Nbjets","");
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_10);
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_50);
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_100);
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_400);
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_1000);
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_1200);
  // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_1500);
  // //hs_Nbjets->Add(resp_NbJets_LepIsoVeto_1800);
  // // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_2000);
  // // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_2200);
  // // hs_Nbjets->Add(resp_NbJets_LepIsoVeto_2300);
  // //hs_Nbjets->Add(resp_NbJets_LepIsoVeto_2340);
  // hs_Nbjets->Draw("hist");
  // hs_Nbjets->GetXaxis()->SetRange(0,15);
  // hs_Nbjets->GetXaxis()->SetTitle("Number of B-tagged jets");
  resp_NbJets_LepIsoVeto_400->GetXaxis()->SetTitle("Number of B-tagged jets");
  resp_NbJets_LepIsoVeto_400->GetXaxis()->SetRange(0,10);
  resp_NbJets_LepIsoVeto_400->Draw("hist");
  resp_NbJets_LepIsoVeto_50->Draw("hist sames");
  //resp_NbJets_LepIsoVeto_100->Draw("hist sames");
  resp_NbJets_LepIsoVeto_1200->Draw("hist sames");
  resp_NbJets_LepIsoVeto_1500->Draw("hist sames");

  //resp_NbJets_LepIsoVeto_1000->Draw("hist sames");
  resp_NbJets_LepIsoVeto_10->Draw("hist sames");

  legend->Draw("sames");

  Canvas_n2->Modified();
  Canvas_n2->cd();
  Canvas_n2->SetSelected(Canvas_n2);
  Canvas_n2->SaveAs(full_path_Met_NBjets);

  //photon pt
   TCanvas *Canvas_n3 = new TCanvas(hist_name_Met3, hist_name_Met3,600,600,1200,1200);
  Canvas_n3->Range(-60.5,-0.65,56.5,0.65);
  Canvas_n3->SetFillColor(0);
  Canvas_n3->SetBorderMode(0);
  Canvas_n3->SetBorderSize(2);
  //  gPad->SetLogy();
  gStyle->SetOptStat(0);
  // THStack *hs_Photpt = new THStack("hs_Photpt","");
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_10);
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_50);
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_100);
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_400);
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_1000);
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_1200);
  // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_1500);
  // //hs_Photpt->Add(resp_PhotPt_LepIsoVeto_1800);
  // // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_2000);
  // // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_2200);
  // // hs_Photpt->Add(resp_PhotPt_LepIsoVeto_2300);
  // //hs_Photpt->Add(resp_PhotPt_LepIsoVeto_2340);
  // hs_Photpt->Draw("hist");
  // //  hs_Photpt->GetXaxis()->SetRange(0,15);
  // hs_Photpt->GetXaxis()->SetTitle("Photon-Pt");
  resp_PhotPt_LepIsoVeto_10->GetXaxis()->SetTitle("Photon-Pt");
  resp_PhotPt_LepIsoVeto_10->GetXaxis()->SetRangeUser(0,1000);
  resp_PhotPt_LepIsoVeto_10->Draw("hist");
  resp_PhotPt_LepIsoVeto_50->Draw("hist sames");
  //  resp_PhotPt_LepIsoVeto_100->Draw("hist sames");
  resp_PhotPt_LepIsoVeto_1200->Draw("hist sames");
  resp_PhotPt_LepIsoVeto_400->Draw("hist sames");

  //resp_PhotPt_LepIsoVeto_1000->Draw("hist sames");
  resp_PhotPt_LepIsoVeto_1500->Draw("hist sames");

  legend->Draw("sames");

  Canvas_n3->Modified();
  Canvas_n3->cd();
  Canvas_n3->SetSelected(Canvas_n3);
  Canvas_n3->SaveAs(full_path_Met_Photpt);

  //MET
  TCanvas *Canvas_n4 = new TCanvas(hist_name_Met4, hist_name_Met4,600,600,1200,1200);
  Canvas_n4->Range(-60.5,-0.65,56.5,0.65);
  Canvas_n4->SetFillColor(0);
  Canvas_n4->SetBorderMode(0);
  Canvas_n4->SetBorderSize(2);
  //  gPad->SetLogy();
  gStyle->SetOptStat(0);
  // THStack *hs_Met = new THStack("hs_Met","");
  // hs_Met->Add(resp_Met_LepIsoVeto_10);
  // hs_Met->Add(resp_Met_LepIsoVeto_50);
  // hs_Met->Add(resp_Met_LepIsoVeto_100);
  // hs_Met->Add(resp_Met_LepIsoVeto_400);
  // hs_Met->Add(resp_Met_LepIsoVeto_1000);
  // hs_Met->Add(resp_Met_LepIsoVeto_1200);
  // hs_Met->Add(resp_Met_LepIsoVeto_1500);
  // //hs_Met->Add(resp_Met_LepIsoVeto_1800);
  // // hs_Met->Add(resp_Met_LepIsoVeto_2000);
  // // hs_Met->Add(resp_Met_LepIsoVeto_2200);
  // // hs_Met->Add(resp_Met_LepIsoVeto_2300);
  // //hs_Met->Add(resp_Met_LepIsoVeto_2340);
  // hs_Met->Draw("hist");
  // //  hs_Met->GetXaxis()->SetRange(0,15);                                                                                                                                                               
  // hs_Met->GetXaxis()->SetTitle("Total MET");
  resp_Met_LepIsoVeto_50->GetXaxis()->SetTitle("Total MET");
  resp_Met_LepIsoVeto_50->GetXaxis()->SetRangeUser(0,1000);
  resp_Met_LepIsoVeto_50->Draw("hist");
  resp_Met_LepIsoVeto_10->Draw("hist sames");
  //resp_Met_LepIsoVeto_100->Draw("hist sames");
  resp_Met_LepIsoVeto_1200->Draw("hist sames");
  resp_Met_LepIsoVeto_400->Draw("hist sames");

  //resp_Met_LepIsoVeto_1000->Draw("hist sames");
  resp_Met_LepIsoVeto_1500->Draw("hist sames");

  legend->Draw("sames");

  Canvas_n4->Modified();
  Canvas_n4->cd();
  Canvas_n4->SetSelected(Canvas_n4);
  Canvas_n4->SaveAs(full_path_Met_Met);

  //HT
  TCanvas *Canvas_n5 = new TCanvas(hist_name_Met, hist_name_Met,600,600,1200,1200);
  Canvas_n5->Range(-60.5,-0.65,56.5,0.65);
  Canvas_n5->SetFillColor(0);
  Canvas_n5->SetBorderMode(0);
  Canvas_n5->SetBorderSize(2);
  //  gPad->SetLogy();
  gStyle->SetOptStat(0);
  // THStack *hs_HT = new THStack("hs_HT","");
  // hs_HT->Add(resp_HT_LepIsoVeto_10);
  // hs_HT->Add(resp_HT_LepIsoVeto_50);
  // hs_HT->Add(resp_HT_LepIsoVeto_100);
  // hs_HT->Add(resp_HT_LepIsoVeto_400);
  // hs_HT->Add(resp_HT_LepIsoVeto_1000);
  // hs_HT->Add(resp_HT_LepIsoVeto_1200);
  // hs_HT->Add(resp_HT_LepIsoVeto_1500);
  // //hs_HT->Add(resp_HT_LepIsoVeto_1800);
  // // hs_HT->Add(resp_HT_LepIsoVeto_2000);
  // // hs_HT->Add(resp_HT_LepIsoVeto_2200);
  // // hs_HT->Add(resp_HT_LepIsoVeto_2300);
  // //hs_HT->Add(resp_HT_LepIsoVeto_2340);
  // hs_HT->Draw("hist");
  // //  hs_HT->GetXaxis()->SetRange(0,15);                                                                                                                                                                  
  // hs_HT->GetXaxis()->SetTitle("Total Sum of PT for all jets");
  resp_HT_LepIsoVeto_1500->GetXaxis()->SetTitle("Total Sum of PT for all jets");
  resp_HT_LepIsoVeto_1500->GetXaxis()->SetRangeUser(0,8000);
  resp_HT_LepIsoVeto_1500->SetTitle("");
  resp_HT_LepIsoVeto_1500->Draw("hist");
  resp_HT_LepIsoVeto_50->Draw("hist sames");
  //resp_HT_LepIsoVeto_100->Draw("hist sames");
  resp_HT_LepIsoVeto_1200->Draw("hist sames");
  resp_HT_LepIsoVeto_400->Draw("hist sames");

  //resp_HT_LepIsoVeto_1000->Draw("hist sames");
  resp_HT_LepIsoVeto_10->Draw("hist sames");

  legend->Draw("sames");

  Canvas_n5->Modified();
  Canvas_n5->cd();
  Canvas_n5->SetSelected(Canvas_n5);
  Canvas_n5->SaveAs(full_path_Met_HT);

}
