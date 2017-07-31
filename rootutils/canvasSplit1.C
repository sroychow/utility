//Canvas split into 2 pads(60,40)-top and bottom
void canvasSplit1() {
  TCanvas* c = new TCanvas("c1","", 1200, 800); 
  TH1F* ht = new TH1F("htop","Top", 200, -1, 1);
  TH1F* hb = new TH1F("hbottom","Bottom", 200, 0, 10);
  TRandom r1, r2;
  for(int i = 0; i<10000;i++) {
    ht->Fill(r1.Gaus(0,1));
    hb->Fill(r2.Gaus(5,2));
  }
   //Double_t xlow, Double_t ylow, Double_t xup, Double_t yup
   TPad *pad1 = new TPad("pad1","Top", 0.0,0.45,1.0,1.0);
   TPad *pad2 = new TPad("pad2","Bottom",0.0,0.0,1.0,0.40);

   pad1->Draw();
   pad2->Draw();
   
   pad1->cd();
   ht->Draw();
   pad1->Update();
   pad1->Modified();

   pad2->cd();
   hb->Draw();
   pad2->Update();
   pad2->Modified();

   c->Update();
   c->Modified();
}
