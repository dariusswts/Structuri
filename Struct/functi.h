#ifndef FUNCTI_H_INCLUDED
#define FUNCTI_H_INCLUD
#include "structuri.h"
#include <string.h>

    /*
 Masina m1;


 strcpy(m1.marca,"Ferrari");
 strcpy(m1.model,"488");
 m1.capacitateMotor=4000;



 Masina m2;
 strcpy(m2.marca,"Mercedes-Benz");
 strcpy(m2.model,"SLS V10");
 m2.capacitateMotor=5000;


 Masina m3;
 strcpy(m3.marca,"BMW");
 strcpy(m3.model,"seria 7 G12");
 m3.capacitateMotor=4000;


 Masina m4;
 strcpy(m4.marca,"Mercedes-Benz");
 strcpy(m4.model,"AMG GT Coupe");
 m4.capacitateMotor=4000;

Masina masini[100]={m1,m2,m3,m4};

    for(int i=0;i<4;i++){

         cout<<masini[i].marca<<endl;
    }
    */

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
