#include <iostream>
#include "datos_usuarios.h"
using namespace std;

int main()
{
    unsigned short int op=0;
    unsigned int nU=1;
    unsigned int *ptr_nU=&nU;

    struct datos_usuarios **usuarios= new datos_usuarios*[nU];
    for(unsigned int i=0; i<nU; i++){
        usuarios[i]=new datos_usuarios[5];
    }
    cout<<"Ingrese nombres y apellidos: "<<endl; cin.getline(usuarios[0]->nombre_apellidos,20);
    cout<<usuarios[0]->nombre_apellidos<<endl;
    while (op!=3) {
        op=menu();
        switch (op) {
            case 1: {
                usuarios=registrar_usuarios(usuarios,ptr_nU);
                break;
            }
            case 2: {
                mostrar_usuarios(usuarios);
                break;
            }
        }
    }
    delete [] usuarios;
    return 0;
}
