#include <iostream>
#include "datos_usuarios.h"
using namespace std;

int main()
{
    unsigned short int op=0;
    unsigned int nU=1;
    unsigned int *ptr_nU=&nU;

//    struct datos_usuarios **usuarios= new datos_usuarios*[nU];
//    for(unsigned int i=0; i<*ptr_nU; i++){
//        usuarios[i]=new datos_usuarios;
//    }
//    for(unsigned int i=0;i<nU;i--){
//        cout<<"Ingrese nombres y apellidos: "<<endl;
//        cin.getline(usuarios[i]->nombre_apellidos,20);
//        cout<<"Ingrese documento de identidad: "<<endl;
//        cin>>usuarios[i]->d_i;
//        cout<<"Ingrese numero celular: "<<endl;
//        cin>>usuarios[i]->num_cel;
//        cout<<"Ingrese la fecha de nacimiento d/m/a: "<<endl;
//        cin.getline(usuarios[i]->fecha_nacimiento,20);
//        cout<<"Ingrese la vocacion, a lo que se dedica: "<<endl;
//        cin.getline(usuarios[i]->vocacion,20);

//    }
//    mostrar_usuarios(usuarios, ptr_nU);

    datos_usuarios *usuarios=new datos_usuarios[nU];


    while (op!=3) {
        op=menu();
        switch (op) {
            case 1: {
               usuarios=registrar_usuarios(usuarios,ptr_nU);
                break;
            }
            case 2: {
                mostrar_usuarios(usuarios, ptr_nU);
                break;
            }
        }
    }
    //delete[] usuarios;
    return 0;
}
