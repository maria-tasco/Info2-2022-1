#include <iostream>
#include "categorias.h"
using namespace std;

int main()
{
    unsigned short int op=0;
    unsigned int nC=0;
    unsigned int *ptr_nC=&nC;

    char **categorias=nullptr;
    categorias=reservar_memoria_Dinamica_incial(ptr_nC);

    while (op!=3) {
        op=menu();
        switch (op) {
            case 1: {
                categorias=registrar_categoria(categorias, ptr_nC);
                break;
            }
            case 2: {
                mostrar_matriz(categorias,nC);
                break;
            }
        }
    }

    delete [] categorias;
    return 0;
}
