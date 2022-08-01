#include <iostream>
#include "datos_usuarios.h"
using namespace std;

int main()
{
    unsigned short int op=0;
    unsigned int nU=1;
    unsigned int *ptr_nU=&nU;

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
    delete[] usuarios;
    return 0;
}
