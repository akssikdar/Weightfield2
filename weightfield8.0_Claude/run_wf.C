#include "WFGUI.h"

void run_wf() {
    if (gSystem->Load("libWeightfield.so") < 0) return;
    
    // Creiamo la GUI ma NON chiamiamo app->Run() qui dentro
    // perché lo gestiremo dall'interprete
    new WFGUI(gClient->GetRoot(), 800, 600, gApplication);
    printf("--- Weightfield Caricato ---\n");
}