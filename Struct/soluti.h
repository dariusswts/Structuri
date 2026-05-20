#ifndef SOLUTI_H_INCLUDED
#define SOLUTI_H_INCLUDED
#include "functi.h"
#include "structuri.h"
using namespace std;


void solutie(){

    Masina masini[100];
    int n;
    citireFIsier(masini,n);
    afisare(masini,n);
}


void solutie4(){
    Elev elevi[100];
    int n;
    citireElevi(elevi,n);
    afisareElevi(elevi,n);
}


#endif // SOLUTI_H_INCLUDED
