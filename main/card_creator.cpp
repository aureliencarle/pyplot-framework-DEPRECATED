#include "../src/card.hpp"
#include "../src/debug.h"
#include "../src/sample_2017.hpp"

#include <iostream>
#include <fstream>

int main(int argc, char** argv){

    std::string year;
    std::string observable;

    if(argc != 3){
        Log("Wrong number of arguments !!!");
        return 0;
    }
    else{
         observable = argv[1];
         year       = argv[2];
    }

    int nBin;
    std::cout << "number of bin : ";
    std::cin >> nBin;

// ------------------------------------------------------------- //

    std::vector<double> integrals;
    double number = 0;
    std::ifstream f("./combine/"+year+"/one_bin/inputs/"+observable+"_integrals_data_timed.txt");
    for(int i = 0; i < nBin; ++i){
        f >> number;
        integrals.push_back(number);
    }
    

    Card card;
    for(int i = 0; i < nBin; ++i){
        std::string name = observable+"_"+std::to_string(nBin)+"_"+std::to_string(i);
        card.generateCard("./combine/2017/one_bin/inputs/"+name+"_datacard.txt",
                          name+".root",
                          observable,
                          integrals[i],
                          ttbarList,
                          systematicList,
                          systematicRate
                         );
    }
    std::cout << "Finished !!!" << std::endl;
    return 0;
}

/*
TFile**		inputs/combine_n_bjets_24_1.root	
 TFile*		inputs/combine_n_bjets_24_1.root	
  KEY: TH1F	data_obs;1	data_obs
  KEY: TH1F	signal;1	n_bjets
  KEY: TH1F	ttx;1	n_bjets
  KEY: TH1F	singletop;1	n_bjets
  KEY: TH1F	dibosons;1	n_bjets
  KEY: TH1F	wjets;1	n_bjets
  KEY: TH1F	zjets;1	n_bjets
  KEY: TH1F	signal_syst_elec_recoUp;1	n_bjets
  KEY: TH1F	ttx_syst_elec_recoUp;1	n_bjets
  KEY: TH1F	singletop_syst_elec_recoUp;1	n_bjets
  KEY: TH1F	dibosons_syst_elec_recoUp;1	n_bjets
  KEY: TH1F	wjets_syst_elec_recoUp;1	n_bjets
  KEY: TH1F	zjets_syst_elec_recoUp;1	n_bjets
  KEY: TH1F	signal_syst_elec_idUp;1	n_bjets
  KEY: TH1F	ttx_syst_elec_idUp;1	n_bjets
  KEY: TH1F	singletop_syst_elec_idUp;1	n_bjets
  KEY: TH1F	dibosons_syst_elec_idUp;1	n_bjets
  KEY: TH1F	wjets_syst_elec_idUp;1	n_bjets
  KEY: TH1F	zjets_syst_elec_idUp;1	n_bjets
  KEY: TH1F	signal_syst_muon_idUp;1	n_bjets
  KEY: TH1F	ttx_syst_muon_idUp;1	n_bjets
  KEY: TH1F	singletop_syst_muon_idUp;1	n_bjets
  KEY: TH1F	dibosons_syst_muon_idUp;1	n_bjets
  KEY: TH1F	wjets_syst_muon_idUp;1	n_bjets
  KEY: TH1F	zjets_syst_muon_idUp;1	n_bjets
  KEY: TH1F	signal_syst_muon_isoUp;1	n_bjets
  KEY: TH1F	ttx_syst_muon_isoUp;1	n_bjets
  KEY: TH1F	singletop_syst_muon_isoUp;1	n_bjets
  KEY: TH1F	dibosons_syst_muon_isoUp;1	n_bjets
  KEY: TH1F	wjets_syst_muon_isoUp;1	n_bjets
  KEY: TH1F	zjets_syst_muon_isoUp;1	n_bjets
  KEY: TH1F	signal_syst_em_trigUp;1	n_bjets
  KEY: TH1F	ttx_syst_em_trigUp;1	n_bjets
  KEY: TH1F	singletop_syst_em_trigUp;1	n_bjets
  KEY: TH1F	dibosons_syst_em_trigUp;1	n_bjets
  KEY: TH1F	wjets_syst_em_trigUp;1	n_bjets
  KEY: TH1F	zjets_syst_em_trigUp;1	n_bjets
  KEY: TH1F	signal_syst_elec_recoDown;1	n_bjets
  KEY: TH1F	ttx_syst_elec_recoDown;1	n_bjets
  KEY: TH1F	singletop_syst_elec_recoDown;1	n_bjets
  KEY: TH1F	dibosons_syst_elec_recoDown;1	n_bjets
  KEY: TH1F	wjets_syst_elec_recoDown;1	n_bjets
  KEY: TH1F	zjets_syst_elec_recoDown;1	n_bjets
  KEY: TH1F	signal_syst_elec_idDown;1	n_bjets
  KEY: TH1F	ttx_syst_elec_idDown;1	n_bjets
  KEY: TH1F	singletop_syst_elec_idDown;1	n_bjets
  KEY: TH1F	dibosons_syst_elec_idDown;1	n_bjets
  KEY: TH1F	wjets_syst_elec_idDown;1	n_bjets
  KEY: TH1F	zjets_syst_elec_idDown;1	n_bjets
  KEY: TH1F	signal_syst_muon_idDown;1	n_bjets
  KEY: TH1F	ttx_syst_muon_idDown;1	n_bjets
  KEY: TH1F	singletop_syst_muon_idDown;1	n_bjets
  KEY: TH1F	dibosons_syst_muon_idDown;1	n_bjets
  KEY: TH1F	wjets_syst_muon_idDown;1	n_bjets
  KEY: TH1F	zjets_syst_muon_idDown;1	n_bjets
  KEY: TH1F	signal_syst_muon_isoDown;1	n_bjets
  KEY: TH1F	ttx_syst_muon_isoDown;1	n_bjets
  KEY: TH1F	singletop_syst_muon_isoDown;1	n_bjets
  KEY: TH1F	dibosons_syst_muon_isoDown;1	n_bjets
  KEY: TH1F	wjets_syst_muon_isoDown;1	n_bjets
  KEY: TH1F	zjets_syst_muon_isoDown;1	n_bjets
  KEY: TH1F	signal_syst_em_trigDown;1	n_bjets
  KEY: TH1F	ttx_syst_em_trigDown;1	n_bjets
  KEY: TH1F	singletop_syst_em_trigDown;1	n_bjets
  KEY: TH1F	dibosons_syst_em_trigDown;1	n_bjets
  KEY: TH1F	wjets_syst_em_trigDown;1	n_bjets
  KEY: TH1F	zjets_syst_em_trigDown;1	n_bjets
*/