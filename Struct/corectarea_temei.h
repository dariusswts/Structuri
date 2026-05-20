#ifndef CORECTAREA_TEMEI_H_INCLUDED
#define CORECTAREA_TEMEI_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

///4

struct Elev{
    char nume[50], prenume[50];
};

void citire4(Elev v[], int &n){
    ifstream f("elevi.txt");
    f>>n;
    for(int i=0;i<n;i++)
        f>>v[i].nume>>v[i].prenume;
    f.close();
}

void sortare(Elev v[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(v[i].nume,v[j].nume)>0||(strcmp(v[i].nume,v[j].nume)==0)){
                Elev aux;
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }
}

void afisare4(Elev v[], int n){
    for(int i=0;i<n;i++)
        cout<<v[i].nume<<" "<<v[i].prenume<<endl;
}

void raspuns4(){
    Elev v[100];
    int n;
    citire4(v,n);
    sortare(v,n);
    afisare4(v,n);
}



///5
///Se cunoaste nr de sportivi participanti la o competitie oarecare .Pentru fiecare dintre ei se cunoaste data nasterii (luna si anul )
///Cunsocandu se data la care se desfasoara competitia sa se afiseze media de varsta a sportivilor exprimata in acelasi mod .Afisati si lista datelor de nastere ale
///sportivilor cu varsta mai mica decat media.


struct Sportivi{
    int luna;
    int an;
    int varsta;
};

void citire5(Sportivi v[100],int &n){
    ifstream f("ex5");
    f>>n;
    f.ignore();
    for(int i=0;i<n;i++){
        f>>v[i].luna;
        f>>v[i].an;
        f>>v[i].varsta;
        f.ignore();
    }
    f.close();
}

int MedieVarste(Sportivi v[100],int n){
    int suma=0;
    int medie;
    for(int i=0;i<n;i++){
        suma=suma+v[i].varsta;
    }
    return medie=suma/n;
}

void afisare5(Sportivi v[100],int &n){
    cout<<"Media: "<<MedieVarste(v,n)<<endl;
    for(int i=0;i<n;i++){
        if(v[i].varsta<MedieVarste(v,n)){
           cout<<v[i].luna<<" "<<v[i].an<<" "<<v[i].varsta<<endl;
        }
    }
}

void solutie5(){
    struct sportivi{
    int luna;
    int an;
    int varsta;
};
   Sportivi v[100];
   int n;

   citire5(v,n);
   afisare5(v,n);
}

///7
///Se considera un sir de n fractii(numitor numarator ) .Afisati numarul de fractii echivalente cu ultima citita
/// ex n=4  (3,5) (36,60) (2,4) (12,20) se va fisa 2 prima si a doua fractie

struct Fractie{
    int numitor, numarator;

};

void citire7(Fractie v[100],int &n){
    ifstream f("ex7");
    f>>n;
    f.ignore();
    for(int i=0;i<n;i++){
        f>>v[i].numitor>>v[i].numarator;
        f.ignore();
    }
    f.close();
}
//3/5  12/20  5*12=60 3*20=60 echivalente

int echivalente(Fractie v[100],int n){
    int cnt=0;
    int a=v[n-1].numitor;
    int b=v[n-1].numarator;
    for(int i=0;i<n-1;i++){
        if(v[i].numitor*b==v[i].numarator*a){
            //cout<<v[i].numitor<<" "<<v[i].numarator<<endl;
            cnt++;
        }
    }
    return cnt;
}

void afisare7(Fractie v[100],int n){
    for(int i=0;i<n;i++){
        cout<<v[i].numitor<<" "<<v[i].numarator<<endl;
    }
}


void solutie7(){
    Fractie v[100];
    int n;
    citire7(v,n);
    afisare7(v,n);
    cout<<endl;
    cout<<echivalente(v,n);
}

///8
///Pentru n numere complexe carora li se cunosc partea reala si cea imaginara sa se afiseze ordinea crescatoare valorile modulelor ce nu apar intervalului [a,b]
///Valorile a si b se citesc de la tast .Modellele rezultate vor fi afisate cu 3 zecimale


struct Complexe{

};




#endif // CORECTAREA_TEMEI_H_INCLUDED
