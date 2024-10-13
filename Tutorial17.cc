void Tutorial17(){
  
  TCanvas *c1 = new TCanvas ();
  
  gStyle->SetPalette(kRainBow);
  
  TH2F *hist = new TH2F("hist","histogram", 100, -1,1,100,-1,1); //Puntos,x_min,x_max,puntos,y_min,y_max
  
  hist->SetStats(0); //Quitar estadisticas
  
  TRandom *rand = new TRandom(10);
  
  for(int i=0; i< 1e7; i++){
  
      double x = rand->Gaus();
      double y = rand->Gaus();
      
      hist->Fill(x,y);
  }
  hist->GetXaxis()->SetTitle("x [cm]");
  hist->GetYaxis()->SetTitle("y [cm]");
  hist->GetZaxis()->SetTitle("Entries");
  
  hist->SetContour(1000);
  
  hist->Draw("colz"); //Dar color al histograma
}
