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

datos_usuarios ** registrar_usuarios(datos_usuarios **usuarios, unsigned int *ptr_nU)
{
    /*Se crea el arreglo aux y se copia los datos del usuario*/
    struct datos_usuarios **us_aux= new datos_usuarios*[*ptr_nU];
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
    usuarios= new datos_usuarios*[*ptr_nU];
    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
    for(unsigned int i=0; i<*ptr_nU; i++){
        usuarios[i]=us_aux[i];
    }
    delete [] us_aux;
    /*Se crea en nuevo espacio para la categoria*/
    usuarios[*(ptr_nU)-1]=new datos_usuarios[5];

    cout<<"Ingrese el usuario que quiere REGISTRAR: "<<endl;
    cout<<"Ingrese nombre: "<<endl;
    cin.getline(usuarios[0]->nombre_apellidos,20);
    cout<<"Ingrese documento de identidad: "<<endl;
    cin>>usuarios[1]->d_i;
    cout<<"Ingrese numero celular: "<<endl;
    cin>>usuarios[2]->num_cel;
    cout<<"Ingrese la fecha de nacimiento d/m/a: "<<endl;
    cin.getline(usuarios[3]->fecha_nacimiento,11);
    cout<<"Ingrese la vocacion, a lo que se dedica: "<<endl;
    cin.getline(usuarios[4]->vocacion,20);

    return usuarios;

    delete [] usuarios;
}

void mostrar_usuarios(datos_usuarios **usuarios)
{
    cout<<"\tLista de usuarios: ";
    cout<<"Nombres y apellidos: "<<usuarios[0]->nombre_apellidos;
}
