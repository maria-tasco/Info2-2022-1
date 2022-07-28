#include <iostream>
#include "categorias.h"
using namespace std;
void mostrar_matriz(char **matriz, int nC){
    cout<<"mostrando matriz"<<endl;
    for (int i=0; i<nC; ++i) {
        cout<< matriz[i] << endl;
    }
}

unsigned short int menu(){
    unsigned short int op=0;
    cout<<"Bienvenido al sistema de registro de categorias"
        <<endl<<"Menu: "<<endl<<"1. Registrar una categoria"
        <<endl<<"2. Visualizar las categorias"
        <<endl<<"3. Salir"<<endl;
    cin>>op;
    return op;
}

void registrar_categoria(char **categorias, unsigned *nC){
    /*! este función realiza el registro de infinitas
     *  categorias ingresadas por un usuario
        - se coloca *nC ya que se esta pasando por
        referencia con un puntero*/
        /*Se crea el arreglo aux y se copia
         * los valores de categorias*/
        char **cat_aux=new char*[*nC];
        for(unsigned int i=0; i<*nC; i++){
            cat_aux[i]=categorias[i];
        }
        /*Se liberal el espacio de memoria de
         *categoria para crear uno nuevo con
         *un espacio más grande*/
        delete [] categorias;
        /*Se aumenta el espacio de memoria
         *puede ser a 5,3 o 2, pero se hace
         *de a 1 para que solo cada vez que
         *usuario vaya a registrar se cree
         *un espacio más para esa categoria*/
        *nC+=1;
        /*Se crea en nuevo espacio de memoria
         *con su nuevo tamaño*/
        categorias=new char*[*nC];
        /*Se copia lo que tenía antes y estaba
         *guardado en el arreglo auxiliar*/
        for(unsigned int i=0; i<*nC; i++){
            categorias[i]=cat_aux[i];
        }
        delete [] cat_aux;
        /*Se crea en nuevo espacio para la categoria*/
        categorias[*nC-1]= new char[20];

        cout<<"Ingrese la categoria que quiere registrar"<<endl;
        cin>>categorias[*nC-1];

}
