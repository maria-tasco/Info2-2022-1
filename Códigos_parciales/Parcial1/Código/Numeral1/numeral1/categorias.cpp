#include <iostream>
#include "categorias.h"
using namespace std;
void mostrar_matriz(char **matriz, int nC){
    cout<<"====LISTA CATEGORIAS===="<<endl;
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

char** registrar_categoria(char **categorias, unsigned *nC){
/*! Función realiza el registro de infinitas categorias ingresadas
 *  por un usuario.
 *  se coloca *nC ya que esta pasando por referencia con un puntero*/
    //char categoria[20];
    /*Se crea el arreglo aux y se copia los valores de categorias*/
    char **cat_aux=new char*[*nC];
    for(unsigned int i=0; i<*nC; i++){
        cat_aux[i]=categorias[i];
    }
    /*Se liberal el espacio de memoria de categoria para crear uno
     * nuevo con un espacio más grande*/
    delete [] categorias;
    /*Se aumenta el tamaño de reserva para la memoria*/
    *nC+=1;
    //cout<<"numero categorias: "<<*nC<<endl;
    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
    categorias=new char*[*nC];
    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
    for(unsigned int i=0; i<*nC; i++){
        categorias[i]=cat_aux[i];
    }
    delete [] cat_aux;
    /*Se crea en nuevo espacio para la categoria*/
    categorias[*nC-1]= new char[20];

    cout<<"Ingrese la categoria que quiere REGISTRAR: "<<endl;
    /*Antes de registrar debo asegurar que no este repetida*/
    //cin>>categoria;
    cin>>categorias[*nC-1];
//    unsigned short int cont=0;
//    for(unsigned int i=0; i<*nC; i++){
//        cout<<categorias[i];
//        if(categorias[i]==categoria){
//            cout<<"La categoria ya existe, intente con otra"<<endl;
//            cont++;
//            break;
//        }
//    }
//    if(cont==0){
//        cout<<"Registrando categoria..."<<endl;
//        categorias[*nC-1]=categoria;
//    }

    return categorias;
    delete [] categorias;
}


char** reservar_memoria_Dinamica_incial(unsigned int *nC)
{
    //creando una matriz auxiliar para asignar espacio de memoria
    char **mat_aux=new char*[*nC];
    for(unsigned int i=0; i<*nC; i++){
        mat_aux[i]=new char[20];
    }
    return mat_aux;
    delete [] mat_aux;
}

