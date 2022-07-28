#include <iostream>
#include "categorias.h"
using namespace std;

int main()
{
    unsigned short int op=0;
    unsigned int nC=1;
    unsigned int *ptr=&nC;

    char **categorias=new char*[nC];
    for(unsigned int i=0; i<nC; i++){
        categorias[i]=new char[20];
    }

    while (op!=3) {
        op=menu();
        switch (op) {
            case 1: {
                registrar_categoria(categorias, ptr);
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
