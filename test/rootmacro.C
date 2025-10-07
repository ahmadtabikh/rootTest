// myMacro.C
void rootmacro() {
    // Create a canvas
    TCanvas *c1 = new TCanvas("c1", "Example Canvas", 800, 600);

    // Example data points
    const int n = 5;
    double x[n] = {0, 1, 2, 3, 4};
    double y[n] = {0, 1, 4, 9, 16}; // y = x^2

    // Create a graph
    TGraph *gr = new TGraph(n, x, y);
    gr->SetTitle("Example Graph;X axis;Y axis");
    gr->SetMarkerStyle(20);
    gr->SetMarkerColor(kBlue);
    gr->Draw("AP"); // Draw axes + points
}
