#ifndef TEMA_H_INCLUDED
#define TEMA_H_INCLUDED




///4
/*
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
            if(strcmp(v[i].nume,v[j].nume)>0)
        }
    }
}

void afisare4(Elev v[], int n){
    for(int i=0;i<n;i++)
        cout<<v[i].nume<<" "<<v[i].prenume<<endl;
}
*/


///6

struct Elev{
    char nume[50], prenume[50];
    int membri;
    int venit;
}

void citire6(Elev v[], int &n, float &L){
    ifstream f("ex6");
    f>>n;
    for(int i=0;i<n;i++){
        f>>v[i].nume>>v[i].prenume>>v[i].membri>>v[i].venit;
    }
    f>>L;
    f.close();
}
void afisare6(Elev v[], int n, float L){
    for(int i=0;i<n;i++){
        int venitMembru=v[i].venit/v[i].membri;
        if(venitMembru > L){
            cout<<v[i].nume<<" "<<v[i].prenume<<endl;
        }
    }
}

void solutieEx6(){
    Elev v[100];
    int n;
    int L;
    citire6(v,n,L);
    afisare6(v,n,L);
}

///8

struct Complex{
    double r, im;
};

///9


struct Elev9{
    char nume[50], prenume[50];
    int varsta;
    float inaltime;
};

void citire9(Elev9 v[], int &n, float &h1, float &h2){
    ifstream f("ex9");
    f>>n;
    for(int i=0;i<n;i++){
        f>>v[i].nume>>v[i].prenume>>v[i].varsta>>v[i].inaltime;
    }
    f>>h1>>h2;
    f.close();
}

void afisare9(Elev9 v[], int n, float h1, float h2){
    for(int i=0;i<n;i++){
        if(v[i].varsta>=14 && v[i].inaltime>=h1 && v[i].inaltime<=h2){
            cout<<v[i].nume<<" "<<v[i].prenume<<" "<<v[i].inaltime<<endl;
        }
    }
}



#endif // TEMA_H_INCLUDED
