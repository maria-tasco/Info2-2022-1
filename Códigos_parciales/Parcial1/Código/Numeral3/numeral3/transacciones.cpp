#include "transacciones.h"
#include <iostream>
#include <ctime>
using namespace std;

unsigned short menu(){
    unsigned short int op=0;
    cout<<endl<<"\tBienvenido al sistema de registro de transacciones"
        <<endl<<"Menu: "<<endl<<"1. Realizar transaccion"
        <<endl<<"2. Visualizar transacciones"
        <<endl<<"3. Salir"<<endl;
    cin>>op;
    return op;
}
datos_transaccion * registrar_transacciones(char *fecha_hora_actual, datos_transaccion *transacciones, unsigned int *ptr_nT)
{
    /*! Funcion que recibe un puntero a la hora y fecha actual, la estructura para
        guardar los datos de la transaccion y un puntero al numero de transacciones.
        Solicita el valor de la transaccion y lo guarda en la estructura, para n
        transacciones y Llama a la funcion encargada de obtener la fecha y hora*/

    char fecha_hora_actual_aux[25];
    /*Se crea el arreglo aux y se copia los datos de las transacciones*/
    datos_transaccion *trans_aux=new datos_transaccion[*ptr_nT];
    for(unsigned int i=0; i<*ptr_nT; i++){
        trans_aux[i]=transacciones[i];
    }
    /*Se liberal el espacio de memoria de transacciones para crear uno
     * nuevo con un espacio más grande para nuevas transacciones*/
    delete [] transacciones;
    /*Se aumenta el tamaño de reserva para la memoria*/
    *ptr_nT+=1;
    cout<<"Numero de transacciones: "<<*ptr_nT<<endl;
    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
    transacciones=new datos_transaccion[*ptr_nT];
    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
    for(unsigned int i=0; i<*ptr_nT; i++){
        transacciones[i]=trans_aux[i];
    }
    delete [] trans_aux;
    /*Se solicita al usuario el valor de la transaccion*/
    for(unsigned int i=0;i<*ptr_nT;i++){
        cout<<"Ingrese el valor de la transaccion: "<<endl;
        cin>>transacciones[i].valor;
        cout<<"registrando la hora..."<<endl;
        fecha_hora_actual=obtener_fecha_hora();
        for(int j=0; j<25; j++){
            fecha_hora_actual_aux[j]=fecha_hora_actual[j];
        }
        for(unsigned short int j=0; j<25; j++){
            cout<<fecha_hora_actual_aux[j];
            transacciones[i].fecha_hora_actual[j]=fecha_hora_actual_aux[j];
        }
    }
    cout<<endl<<"\tMostrando las transacicones: "<<endl;
    for(unsigned int i=0;i<*ptr_nT;i++){
        cout<<"fecha de la transaccion: ";
        for(unsigned short int j=0; j<25; j++){
            cout<<transacciones[i].fecha_hora_actual[j];
        }
        cout<<endl<<"valor de la transaccion: "<<transacciones[i].valor<<endl;
        cout<<"========================="<<endl;
    }
    return transacciones;
    fecha_hora_actual=nullptr;
    delete [] transacciones;
}

extern char* obtener_fecha_hora()
{
    /*Declarar una variable tipo time_t que recibe time()
    En general es una variable tipo const time_t *_timer*/
    time_t tt;
    time_t *ptr_tt=&tt;
    /*Declarar una variable para almacenar y retornar el valor de localtime().
    Se usa la palabra clave struc porque son de diferente tipo de datos
    tm es el nombre de la estructura usada para llenar*/
    struct tm *ti;
    /*APlicando time(), encuentra la fecha actual del calendario y la guarda en tt ya
    que al usar punteros paso el parametro por referencia y me queda guardado el valor
    en la dirección de memoria usada.*/
    time(ptr_tt);
    //usando localtime(), llena la estructura teniendo la fecha y el tiempo en tt
    ti=localtime(ptr_tt);

    return asctime(ti);

    ti=nullptr;
    ptr_tt=nullptr;
}

void mostrar_transacciones(datos_transaccion *transacciones, unsigned int *ptr_nT)
{
    cout<<endl<<"\tMostrando las transacicones: "<<endl;
    for(unsigned int i=0;i<*ptr_nT;i++){
        cout<<"fecha de la transaccion: ";
        for(unsigned short int j=0; j<25; j++){
            cout<<transacciones[i].fecha_hora_actual[j];
        }
        cout<<endl<<"valor de la transaccion: "<<transacciones[i].valor<<endl;
        cout<<"========================="<<endl;
    }
}
