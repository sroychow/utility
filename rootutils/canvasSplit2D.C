//Canvas split into 2D pads(80,20)-top and bottom,(50,50) sideways
void canvasSplit2D() {
  TCanvas* c = new TCanvas("c1","", 1200, 800); 

   //Double_t xlow, Double_t ylow, Double_t xup, Double_t yup
   TPad *pad11 = new TPad("pad11","11", 0.0,0.20,.50,1.0);
   TPad *pad12 = new TPad("pad12","12", 0.50,0.20,1.0,1.0);
   TPad *pad21 = new TPad("pad21","21",0.0,0.0,.50,0.20);
   TPad *pad22 = new TPad("pad22","22",0.50,0.0,1.0,0.20);

   pad11->Draw();
   pad12->Draw();
   pad21->Draw();
   pad22->Draw();


  TH1F* ht = new TH1F("htop","Top", 200, -1, 1);
  TRandom r1;
  for(int i = 0; i<10000;i++) 
    ht->Fill(r1.Gaus(0,1));

  pad11->cd();
  ht->Draw();
  pad11->Update();
  pad11->Modified();

  pad12->cd();
  ht->Draw();
  pad12->Update();
  pad12->Modified();
  pad21->cd();
  ht->Draw();
  pad21->Update();
  pad21->Modified();
  pad22->cd();
  ht->Draw();
  pad22->Update();
  pad22->Modified();

   c->Update();
   c->Modified();
}
