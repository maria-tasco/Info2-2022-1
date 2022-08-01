#include "transacciones.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    unsigned short int op=0;
    char *fecha_hora_actual=nullptr;
    unsigned int nT=0;
    unsigned int *ptr_nT=&nT;

    datos_transaccion *transacciones=new datos_transaccion[nT];

    while (op!=3) {
        op=menu();
        switch (op) {
            case 1: {
                registrar_transacciones(fecha_hora_actual,transacciones,ptr_nT);
                break;
            }
            case 2: {
                mostrar_transacciones(transacciones,ptr_nT);
                break;
            }
        }
    }
    delete [] transacciones;
    return 0;
}
