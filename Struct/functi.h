#ifndef FUNCTI_H_INCLUDED
#define FUNCTI_H_INCLUD
#include "structuri.h"
#include <string.h>

void citireFIsier(Masina v[100],int&n){
    ifstream f("data.txt");
    f>>n;
    f.ignore();
    for(int i=0;i<n;i++){
        f.getline(v[i].marca,100);
        f.getline(v[i].model,50);
        f>>v[i].capacitateMotor;

       f.ignore();
    }
    f.close();
}

void afisare(Masina v[100],int n){
    for(int i=0;i<n;i++){
        cout<<v[i].marca<<endl;

    }
}







void citireElevi(Elev v[100],int&n){
    ifstream f("elevi.txt");
    f>>n;
    f.ignore();
    for(int i=0;i<n;i++){
        f.getline(v[i].nume,100);
        f.getline(v[i].prenume,100);

        f.ignore();
    }
    f.close();
}
void afisareElevi(Elev v[100],int n){
    for(int i=0;i<n;i++){
        cout<<v[i].nume<<" "<<v[i].prenume<<endl;
    }
}

void sortare(Elev v[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
//            if(strcmp(v[i].nume,v[j].nume)>)
        }
    }
}








#endif // FUNCTI_H_INCLUDED
