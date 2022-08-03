#include <iostream>
#include "categorias_gastos.h"
#include "datos_transaccion.h"
#include "datos_usuario.h"
using namespace std;
unsigned short menu();
int main()
{
    unsigned short int op=0;
    unsigned int nU=1;
    unsigned int *ptr_nU=&nU;
    unsigned int nC=0;
    unsigned int *ptr_nC=&nC;

    char **categorias=nullptr;
    categorias=reservar_memoria_Dinamica_incial(ptr_nC);
    datos_funciones_usuario *usuarios=new datos_funciones_usuario[nU];

    while (op!=6) {
        op=menu();
        switch (op) {
            case 1: {
                usuarios=registrar_usuarios(usuarios,ptr_nU);
                break;
            }
            case 2: {
                mostrar_usuarios(usuarios,ptr_nU);
                unsigned int num_usuario=0;
                cout<<"¿A cuál numero de usuario quiere agregar una categoria de gasto?"<<endl;
                cin>>num_usuario;;
                categorias=registrar_categoria(categorias, ptr_nC);
                cout<<*(categorias[nC-1]);
                usuarios[num_usuario+1].categorias =categorias;
                mostrar_matriz(categorias,nC,usuarios,num_usuario);


                break;
            }
            case 3: {
                mostrar_usuarios(usuarios, ptr_nU);
                break;
            }
        }
    }
    delete [] usuarios;
    return 0;
}
unsigned short int menu(){
    unsigned short int op=0;
    cout<<"Bienvenido al sistema de registro de pagos"
        <<endl<<"Menu: "<<endl<<"1. Registrar usuario"
        <<endl<<"2. Registrar categoria de gasto"
        <<endl<<"3. Listar usuarios"<<endl
        <<endl<<"4. Listar categorias del usuario"<<endl
        <<endl<<"5. Registrar gastos"<<endl
        <<endl<<"6. Salir"<<endl;
    cin>>op;
    return op;
}
