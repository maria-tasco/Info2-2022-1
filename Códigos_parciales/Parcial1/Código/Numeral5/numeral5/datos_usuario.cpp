#include "datos_usuario.h"
#include <iostream>
using namespace std;


datos_funciones_usuario * registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU)
{
    /*Se crea el arreglo aux y se copia los datos del usuario*/
    struct datos_funciones_usuario *us_aux= new datos_funciones_usuario [*ptr_nU];
    for(unsigned int i=0; i<*ptr_nU; i++){
        us_aux[i]=usuarios[i];
    }
    /*Se liberal el espacio de memoria de usuarios para crear uno
     * nuevo con un espacio más grande para nuevos usuarios*/
    delete [] usuarios;
    /*Se aumenta el tamaño de reserva para la memoria*/
    *ptr_nU+=1;
    cout<<"Numero de usuarios: "<<*ptr_nU-1<<endl;
    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
    usuarios= new datos_funciones_usuario [*ptr_nU];
    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
    for(unsigned int i=0; i<*ptr_nU; i++){
        usuarios[i]=us_aux[i];
    }
    delete [] us_aux;

    //============================================================
    fflush(stdin);
    cout<<"\tIngrese datos del usuario"<<endl;
    cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
    fflush(stdin);
    cout<<"Ingrese la vocacion, a lo que se dedica: "<<endl;
    cin.getline(usuarios[*ptr_nU-1].vocacion,20,'\n');
    fflush(stdin);
    cout<<"Ingrese nombres y apellidos: "<<endl;
    cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
    fflush(stdin);
    cout<<"Ingrese documento de identidad: "<<endl;
    cin>>usuarios[*ptr_nU-1].d_i;
    cout<<"Ingrese numero celular: "<<endl;
    cin>>usuarios[*ptr_nU-1].num_cel;
    cout<<"Ingrese la edad: "<<endl;
    cin>>usuarios[*ptr_nU-1].edad;

    return usuarios;
    delete [] usuarios;
}

void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU)
{
    cout<<"\tLista de usuarios"<<endl;
    for(unsigned int i=1;i<*ptr_nU;i++){
        cout<<"Usuario "<<i<<endl;
        cout<<"Nombres y apellidos: "<<usuarios[i].nombre_apellidos<<endl;
        cout<<"Numero documento: "<<usuarios[i].d_i<<endl;
        cout<<"Numero celular: "<<usuarios[i].num_cel<<endl;
        cout<<"Edad: "<<usuarios[i].edad<<endl;
        cout<<"Vocacion: "<<usuarios[i].vocacion<<endl;
        cout<<"==================================================="<<endl;
     }
}

