#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;


void datos(char **cad, char **ccad, int fil, int col);
void verificador(char **cad, char **ccad, int fil, int col);
void mostrar(char **cad, int fil);
void agregar(char **cad, char **cad1, char **ccad, char *p, int fil, int col);
bool verificador1(char **cad, char **ccad, int fil, int col);
void buscar(char **cad, char *p, int fil, int col);




int main(){


    int fil=1, col=20;
    char **cad;
    char **cad1;
    char **ccad;
    char *p;


    p=new char [col];
    cad=new char *[fil];
    cad1=new char *[fil];
    ccad=new char *[fil];
    for(int i=0; i<fil; i++){
        cad[i]=new char [col];
        cad1[i]=new char [col];
        ccad[i]=new char [col];

    }


    datos(cad,ccad,fil,col);
    //mostrar(cad,fil);

    char op;
    cout<<"Ingresar mas datos S/N: ";
    cin>>op;
    if(op=='s' || op=='S'){
        agregar(cad,cad1,ccad,p,fil,col);
    }




    for(int i=0; i<fil; i++){
        delete[] cad[i];
        delete[] cad1[i];
        delete[] ccad[i];
    }

    delete[] p;
    delete[] cad;
    delete[] cad1;
    delete[] ccad;



    cin.get();
    cin.ignore();
    return 0;
}


void buscar(char **cad, char *p, int fil, int col){

   // int pos=0;
    for(int i=0; i<fil; i++){
        if( strcmp(cad[i],p)==0 ){
            //pos=i;
            cout<<"palabra "<<p<<" encontrada en la posicion: "<<i<<endl;
        }
    }
}

void agregar(char **cad,char **cad1, char **ccad, char *p, int fil, int col){

    char op;
    int ban=0;

    do{
        do{
            ban=0;
            cad1=new char *[fil];
            for(int i=0; i<fil; i++){
                cad1[i]=cad[i];
            }

            delete[] cad;

            fil++;
            //int k=fil;
            cad=new char *[fil];
            for(int i=0; i<fil-1; i++){
                cad[i]=cad1[i];
            }

            delete[] cad1;

            cad[fil-1]=new char [col];

            cout<<"Nombre: ";
            fflush(stdin);
            cin.getline(cad[fil-1],col,'\n');

            verificador(cad,ccad,fil,col);
            if(verificador1(cad,ccad,fil,col)==true){
                cout<<"Ya existe este registro.\n";
                fil--;
                ban=1;
            }
    }while(ban==1);
        //mostrar(cad,fil);
        cout<<"Ingresar mas datos S/N: ";
        cin>>op;
        cout<<endl;
    }while(op=='s' || op=='S');
    mostrar(cad,fil);


    cout<<"palabra a buscar: ";
    fflush(stdin);
    cin.getline(p,col,'\n');
    cout<<"cadena: "<<p<<endl;
    buscar(cad,p,fil,col);
    cout<<endl;
}

bool verificador1(char **cad, char **ccad, int fil, int col){

    int ban=0;
    for(int i=0; i<fil; i++){
        for(int j=i+1; j<fil; j++){
            if(strcmp(cad[i],ccad[j])==0){
                ban=1;
                break;
            }
            if(ban==1) break;
        }
        if(ban==1) break;
    }
    if(ban==1) return true;
    else return false;
}

void mostrar(char **cad, int fil){

    for(int i=0; i<fil; i++){
        cout<<"CATEGORIA: "<<cad[i]<<endl;
    }
}

void datos(char **cad, char **ccad, int fil, int col){

    for(int i=0; i<fil; i++){
        cout<<"Categoria: ";
        fflush(stdin);
        cin.getline(cad[i],col,'\n');
    }
    verificador(cad,ccad,fil,col);
    cout<<endl;
}

void verificador(char **cad, char **ccad, int fil, int col){


        for(int i=0; i<fil; i++){
            ccad[i]=cad[i];
        }

}
