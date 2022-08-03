#include<iostream>
#include<iomanip>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;


void datos(char **nom, char **ape, char **sexo, int *edad,int *doc,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col);

void verificador(char **nom, char **ape, char **sexo, int *edad,int *doc,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col);

void mostrar(char **nom, char **ape, char **sexo, int *edad, int *doc, int fil);

void agregar(char **nom, char **ape, char **sexo, int *edad, int *doc,
char **nom1, char **ape1, char **sexo1, int *edad1, int *doc1,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col);

bool verificador1(char **nom, char **ape, char **sexo, int *edad, int *doc,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col);

int main(){


    int fil=1, col=20;
    char **nom, **ape, **sexo;
    int *edad, *doc;
    char **nom1, **ape1, **sexo1;
    int *edad1, *doc1;
    char **cnom, **cape, **csexo;
    int *cedad, *cdoc;


    nom=new char *[fil];
    ape=new char *[fil];
    sexo=new char *[fil];
    edad=new int [fil];
    doc=new int [fil];

    nom1=new char *[fil];
    ape1=new char *[fil];
    sexo1=new char *[fil];
    edad1=new int [fil];
    doc1=new int [fil];

    cnom=new char *[fil];
    cape=new char *[fil];
    csexo=new char *[fil];
    cedad=new int [fil];
    cdoc=new int [fil];

    for(int i=0; i<fil; i++){
        nom[i]=new char [col];
        ape[i]=new char [col];
        sexo[i]=new char [col];

        nom1[i]=new char [col];
        ape1[i]=new char [col];
        sexo1[i]=new char [col];

        cnom[i]=new char [col];
        cape[i]=new char [col];
        csexo[i]=new char [col];
    }


    datos(nom,ape,sexo,edad,doc,cnom,cape,csexo,cedad,cdoc,fil,col);
    mostrar(nom,ape,sexo,edad,doc,fil);

    char op;
    cout<<"Ingresar mas datos S/N: ";
    cin>>op;
    if(op=='s' || op=='S'){
        agregar(nom,ape,sexo,edad,doc,nom1,ape1,sexo1,edad1,doc1,
                cnom,cape,csexo,cedad,cdoc,fil,col);
    }

    for(int i=0; i<fil; i++){
        delete[] nom[i];
        delete[] ape[i];
        delete[] sexo[i];

        delete[] nom1[i];
        delete[] ape1[i];
        delete[] sexo1[i];

        delete[] cnom[i];
        delete[] cape[i];
        delete[] csexo[i];
    }

    delete[] nom;
    delete[] ape;
    delete[] sexo;
    delete[] edad;
    delete[] doc;

    delete[] nom1;
    delete[] ape1;
    delete[] sexo1;
    delete[] edad1;
    delete[] doc1;

    delete[] cnom;
    delete[] cape;
    delete[] csexo;
    delete[] cedad;
    delete[] cdoc;



    cin.get();
    cin.ignore();
    return 0;
}

void agregar(char **nom, char **ape, char **sexo, int *edad, int *doc,
char **nom1, char **ape1, char **sexo1, int *edad1, int *doc1,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col){

    char op;
    int ban=0;

    do{
        do{
            ban=0;
            nom1=new char *[fil];
            ape1=new char *[fil];
            sexo1=new char *[fil];
            edad1=new int [fil];
            doc1=new int [fil];

            for(int i=0; i<fil; i++){
                nom1[i]=nom[i];
                ape1[i]=ape[i];
                sexo1[i]=sexo[i];
                edad1[i]=edad[i];
                doc1[i]=doc[i];
            }

            delete[] nom;
            delete[] ape;
            delete[] sexo;
            delete[] edad;
            delete[] doc;

            fil++;
            int k=fil;
            nom=new char *[fil];
            ape=new char *[fil];
            sexo=new char *[fil];
            edad=new int [fil];
            doc=new int [fil];

            for(int i=0; i<fil-1; i++){
                nom[i]=nom1[i];
                ape[i]=ape1[i];
                sexo[i]=sexo1[i];
                edad[i]=edad1[i];
                doc[i]=doc1[i];
            }

            delete[] nom1;
            delete[] ape1;
            delete[] sexo1;
            delete[] edad1;
            delete[] doc1;

            nom[k-1]=new char [col];
            ape[k-1]=new char [col];
            sexo[k-1]=new char [col];

            cout<<"Nombre: ";
            fflush(stdin);
            cin.getline(nom[k-1],col,'\n');
            cout<<"Apellido: ";
            fflush(stdin);
            cin.getline(ape[k-1],col,'\n');
            cout<<"Sexo: ";
            fflush(stdin);
            cin.getline(sexo[k-1],col,'\n');
            cout<<"Edad: ";
            cin>>edad[k-1];
            cout<<"Documento: ";
            cin>>doc[k-1];

            verificador(nom,ape,sexo,edad,doc,cnom,cape,csexo,cedad,cdoc,fil,col);
            if(verificador1(nom,ape,sexo,edad,doc,cnom,cape,csexo,cedad,cdoc,fil,col)==true){
                cout<<"Ya existe este registro.\n";
                fil--;
                ban=1;
            }
    }while(ban==1);
        mostrar(cnom,cape,csexo,cedad,cdoc,fil);
        cout<<"Ingresar mas datos S/N: ";
        cin>>op;
        cout<<endl;
    }while(op=='s' || op=='S');

}

bool verificador1(char **nom, char **ape, char **sexo, int *edad, int *doc,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col){

    int ban=0;
    for(int i=0; i<fil; i++){
        for(int j=i+1; j<fil; j++){
 if(strcmp(nom[i],cnom[j])==0 && strcmp(ape[i],cape[j])==0
   && strcmp(sexo[i],csexo[j])==0 && edad[ i ]==cedad[ j ]
        && doc[ i ]==cdoc[ j ] )
         {
                ban=1;
                break;
            }
            if(ban==1) break;
        }
        if(ban==1) break;
    }
    if(ban==1)  return true;
    else    return false;
}

void mostrar(char **nom, char **ape, char **sexo, int *edad, int *doc, int fil){

    cout<<"NOMBRE     APELLIDO        SEXO       EDAD      DOCUMENTO\n";

    for(int i=0; i<fil; i++){
        cout<<nom[i]<<"       "<<ape[i]<<"        "<<sexo[i]<<"   "<<
        edad[i]<<"         "<<doc[i]<<endl;
    }
}

void datos(char **nom, char **ape, char **sexo, int *edad,int *doc,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col){

    for(int i=0; i<fil; i++){
        cout<<"Nombre: ";
        fflush(stdin);
        cin.getline(nom[i],col,'\n');
        cout<<"Apellido: ";
        fflush(stdin);
        cin.getline(ape[i],col,'\n');
        cout<<"Sexo: ";
        fflush(stdin);
        cin.getline(sexo[i],col,'\n');
        cout<<"Edad: ";
        cin>>edad[i];
        cout<<"Documento: ";
        cin>>doc[i];
    }
    verificador(nom,ape,sexo,edad,doc,cnom,cape,csexo,cedad,cdoc,fil,col);
    cout<<endl;
}

void verificador(char **nom, char **ape, char **sexo, int *edad,int *doc,
char **cnom, char **cape, char **csexo, int *cedad, int *cdoc, int fil, int col){


        for(int i=0; i<fil; i++){
            cnom[i]=nom[i];
            cape[i]=ape[i];
            csexo[i]=sexo[i];
            cedad[i]=edad[i];
            cdoc[i]=doc[i];
        }

}
