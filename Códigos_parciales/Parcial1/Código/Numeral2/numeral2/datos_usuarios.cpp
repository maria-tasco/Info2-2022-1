#include <iostream>
#include "datos_usuarios.h"
using namespace std;

unsigned short int menu(){
    unsigned short int op=0;
    cout<<"\tBienvenido al sistema de registro de usuarios"
        <<endl<<"Menu: "<<endl<<"1. Registrar un usuario"
        <<endl<<"2. Visualizar datos personales de los usuarios"
        <<endl<<"3. Salir"<<endl;
    cin>>op;
    return op;
}

datos_usuarios * registrar_usuarios(datos_usuarios *usuarios, unsigned int *ptr_nU)
{
    /*Se crea el arreglo aux y se copia los datos del usuario*/
    struct datos_usuarios *us_aux= new datos_usuarios[*ptr_nU];
    for(unsigned int i=0; i<*ptr_nU; i++){
        us_aux[i]=usuarios[i];
    }
    /*Se liberal el espacio de memoria de usuarios para crear uno
     * nuevo con un espacio más grande para nuevos usuarios*/
    delete [] usuarios;
    /*Se aumenta el tamaño de reserva para la memoria*/
    *ptr_nU+=1;
    cout<<"Numero de usuarios: "<<*ptr_nU<<endl;
    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
    usuarios= new datos_usuarios[*ptr_nU];
    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
    for(unsigned int i=0; i<*ptr_nU; i++){
        usuarios[i]=us_aux[i];
    }
    delete [] us_aux;

        cout<<"Ingrese nombres y apellidos: "<<endl;
        cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
        cout<<"Ingrese documento de identidad: "<<endl;
        cin>>usuarios[*ptr_nU-1].d_i;
        cout<<"Ingrese numero celular: "<<endl;
        cin>>usuarios[*ptr_nU-1].num_cel;
        cout<<"Ingrese la edad: "<<endl;
        cin>>usuarios[*ptr_nU-1].edad;
        cout<<"Ingrese la vocacion, a lo que se dedica: "<<endl;
        cin.getline(usuarios[*ptr_nU-1].vocacion,20,'\n');

    return usuarios;
    delete [] usuarios;
}

void mostrar_usuarios(datos_usuarios *usuarios, unsigned int *ptr_nU)
{
    for(unsigned int i=0;i<*ptr_nU;i++){
        cout<<usuarios[i].nombre_apellidos<<endl;
        cout<<usuarios[i].d_i<<endl;
        cout<<usuarios[i].num_cel<<endl;
        cout<<usuarios[i].edad<<endl;
        cout<<usuarios[i].vocacion<<endl;

    }
}
