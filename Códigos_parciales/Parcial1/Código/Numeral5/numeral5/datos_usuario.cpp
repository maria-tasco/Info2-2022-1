//===Ultimo==

//#include "datos_usuario.h"
//#include <iostream>
//using namespace std;


//datos_funciones_usuario * registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU)
//{
//    /*Se crea el arreglo aux y se copia los datos del usuario*/
//    struct datos_funciones_usuario *us_aux= new datos_funciones_usuario [*ptr_nU];
//    for(unsigned int i=0; i<*ptr_nU; i++){
//        us_aux[i]=usuarios[i];
//    }
//    /*Se liberal el espacio de memoria de usuarios para crear uno
//     * nuevo con un espacio más grande para nuevos usuarios*/
//    delete [] usuarios;
//    /*Se aumenta el tamaño de reserva para la memoria*/
//    *ptr_nU+=1;
//    cout<<"Numero de usuarios: "<<*ptr_nU-1<<endl;
//    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
//    usuarios= new datos_funciones_usuario [*ptr_nU];
//    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
//    for(unsigned int i=0; i<*ptr_nU; i++){
//        usuarios[i]=us_aux[i];
//    }
//    delete [] us_aux;

//    //============================================================
//    fflush(stdin);
//    cout<<"\tIngrese datos del usuario"<<endl;
//    cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
//    fflush(stdin);
//    cout<<"Ingrese la vocacion, a lo que se dedica: "<<endl;
//    cin.getline(usuarios[*ptr_nU-1].vocacion,20,'\n');
//    fflush(stdin);
//    cout<<"Ingrese nombres y apellidos: "<<endl;
//    cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
//    fflush(stdin);
//    cout<<"Ingrese documento de identidad: "<<endl;
//    cin>>usuarios[*ptr_nU-1].d_i;
//    cout<<"Ingrese numero celular: "<<endl;
//    cin>>usuarios[*ptr_nU-1].num_cel;
//    cout<<"Ingrese la edad: "<<endl;
//    cin>>usuarios[*ptr_nU-1].edad;

//    return usuarios;
//    delete [] usuarios;
//}

//void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU)
//{
//    cout<<"\tLista de usuarios"<<endl;
//    for(unsigned int i=1;i<*ptr_nU;i++){
//        cout<<"Usuario numero: "<<i-1<<endl;
//        cout<<"Nombres y apellidos: "<<usuarios[i].nombre_apellidos<<endl;
//        cout<<"Numero documento: "<<usuarios[i].d_i<<endl;
//        cout<<"Numero celular: "<<usuarios[i].num_cel<<endl;
//        cout<<"Edad: "<<usuarios[i].edad<<endl;
//        cout<<"Vocacion: "<<usuarios[i].vocacion<<endl;
//        cout<<"==================================================="<<endl;
//     }
//}
//===============================================================
//void mostrar_matriz(datos_funciones_usuario *usuarios, unsigned int num_usuarios){

//    cout<<"==== LISTA CATEGORIAS DEL USUARIO ->"<<usuarios[num_usuarios+1].nombre_apellidos<<"<- ===="<<endl;

//    for (unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++) {
//        for(unsigned short int j=0; j<20; j++)
//            cout<<usuarios[num_usuarios+1].categorias[j];
//        cout<<endl;
//    }
//}

//datos_funciones_usuario *  registrar_categoria(datos_funciones_usuario *usuarios, unsigned int num_usuarios){
//*! Función realiza el registro de infinitas categorias ingresadas
// *  por un usuario.*/

//    usuarios[num_usuarios+1].categorias=new char*[usuarios[num_usuarios+1].num_categorias];
//    for(unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++){
//        usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias]=new char[20];
//    }
//    //=====================================================
//    usuarios[num_usuarios+1].categorias_aux=new char*[usuarios[num_usuarios+1].num_categorias];
//    for(unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++){
//        usuarios[num_usuarios+1].categorias_aux[i]=usuarios[num_usuarios+1].categorias[i];
//    }
//    delete [] usuarios[num_usuarios+1].categorias;
//    usuarios[num_usuarios+1].num_categorias+=1;
//    cout<<"numero categorias: "<<usuarios[num_usuarios+1].num_categorias<<endl;
//    usuarios[num_usuarios+1].categorias=new char*[usuarios[num_usuarios+1].num_categorias];
//    for(unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++){
//        usuarios[num_usuarios+1].categorias[i]=usuarios[num_usuarios+1].categorias_aux[i];
//    }
//    usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias]=new char[20];
//    //===================================================================
//    cout<<"Ingrese la categoria que quiere REGISTRAR para el usuario  ->"<<usuarios[num_usuarios+1].nombre_apellidos<<"<-"<<endl;
//    cin>>usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias];
//    /*fflush(stdin);
//    cin.getline(usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias],20,'\n');
//   fflush(stdin);
//    cin.getline(usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias],20,'\n');
//    fflush(stdin);*/
//    for(unsigned short int j=0; j<20; j++)
//        cout<<usuarios[num_usuarios+1].categorias[j];
//    cout<<endl;
//    return usuarios;
//    //delete [] categorias;
//}
//===penultimo===
//#include "datos_usuario.h"
//#include <iostream>
//using namespace std;


//datos_funciones_usuario * registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU)
//{
//    /*Se crea el arreglo aux y se copia los datos del usuario*/
//    struct datos_funciones_usuario *us_aux= new datos_funciones_usuario [*ptr_nU];
//    for(unsigned int i=0; i<*ptr_nU; i++){
//        us_aux[i]=usuarios[i];
//    }
//    /*Se liberal el espacio de memoria de usuarios para crear uno
//     * nuevo con un espacio más grande para nuevos usuarios*/
//    delete [] usuarios;
//    /*Se aumenta el tamaño de reserva para la memoria*/
//    *ptr_nU+=1;
//    cout<<"Numero de usuarios: "<<*ptr_nU-1<<endl;
//    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
//    usuarios= new datos_funciones_usuario [*ptr_nU];
//    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
//    for(unsigned int i=0; i<*ptr_nU; i++){
//        usuarios[i]=us_aux[i];
//    }
//    delete [] us_aux;

//    //============================================================
//    fflush(stdin);
//    cout<<"\tIngrese datos del usuario"<<endl;
//    cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
//    fflush(stdin);
//    cout<<"Ingrese la vocacion, a lo que se dedica: "<<endl;
//    cin.getline(usuarios[*ptr_nU-1].vocacion,20,'\n');
//    fflush(stdin);
//    cout<<"Ingrese nombres y apellidos: "<<endl;
//    cin.getline(usuarios[*ptr_nU-1].nombre_apellidos,20, '\n' );
//    fflush(stdin);
//    cout<<"Ingrese documento de identidad: "<<endl;
//    cin>>usuarios[*ptr_nU-1].d_i;
//    cout<<"Ingrese numero celular: "<<endl;
//    cin>>usuarios[*ptr_nU-1].num_cel;
//    cout<<"Ingrese la edad: "<<endl;
//    cin>>usuarios[*ptr_nU-1].edad;

//    return usuarios;
//    delete [] usuarios;
//}

//void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU)
//{
//    cout<<"\tLista de usuarios"<<endl;
//    for(unsigned int i=1;i<*ptr_nU;i++){
//        cout<<"Usuario numero: "<<i-1<<endl;
//        cout<<"Nombres y apellidos: "<<usuarios[i].nombre_apellidos<<endl;
//        cout<<"Numero documento: "<<usuarios[i].d_i<<endl;
//        cout<<"Numero celular: "<<usuarios[i].num_cel<<endl;
//        cout<<"Edad: "<<usuarios[i].edad<<endl;
//        cout<<"Vocacion: "<<usuarios[i].vocacion<<endl;
//        cout<<"==================================================="<<endl;
//     }
//}
//===============================================================
//void mostrar_matriz(datos_funciones_usuario *usuarios, unsigned int num_usuarios){

//    cout<<"==== LISTA CATEGORIAS DEL USUARIO ->"<<usuarios[num_usuarios+1].nombre_apellidos<<"<- ===="<<endl;

//    for (unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++) {
//        for(unsigned short int j=0; j<20; j++)
//            cout<<usuarios[num_usuarios+1].categorias[j];
//        cout<<endl;
//    }
//}

//datos_funciones_usuario *  registrar_categoria(char **categorias, unsigned *nC,datos_funciones_usuario *usuarios, unsigned int num_usuarios){
//*! Función realiza el registro de infinitas categorias ingresadas
// *  por un usuario.
// *  se coloca *nC ya que esta pasando por referencia con un puntero*/
//    //    //char categoria[20];
//    //    /*Se crea el arreglo aux y se copia los valores de categorias*/
//    //    char **cat_aux=new char*[*nC];
//    //    for(unsigned int i=0; i<*nC; i++){
//    //        cat_aux[i]=categorias[i];
//    //    }
//    //    /*Se liberal el espacio de memoria de categoria para crear uno
//    //     * nuevo con un espacio más grande*/
//    //    delete [] categorias;
//    //    /*Se aumenta el tamaño de reserva para la memoria*/
//    //    *nC+=1;
//    //    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
//    //    categorias=new char*[*nC];
//    //    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
//    //    for(unsigned int i=0; i<*nC; i++){
//    //        categorias[i]=cat_aux[i];
//    //    }
//    //    delete [] cat_aux;
//    //    /*Se crea en nuevo espacio para la categoria*/
//    //    categorias[*nC-1]= new char[20];
//    //=====================================================
//    usuarios[num_usuarios+1].categorias_aux=new char[usuarios[num_usuarios+1].num_categorias];
//    for(unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++){
//        usuarios[num_usuarios+1].categorias_aux[i]=usuarios[num_usuarios+1].categorias[i];
//    }
//    delete [] usuarios[num_usuarios+1].categorias;
//    usuarios[num_usuarios+1].num_categorias+=1;
//    cout<<"numero categorias: "<<usuarios[num_usuarios+1].num_categorias<<endl;
//    usuarios[num_usuarios+1].categorias=new char[usuarios[num_usuarios+1].num_categorias];
//    for(unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++){
//        usuarios[num_usuarios+1].categorias[i]=usuarios[num_usuarios+1].categorias_aux[i];
//    }
//    //===================================================================
//    cout<<"Ingrese la categoria que quiere REGISTRAR para el usuario  ->"<<usuarios[num_usuarios+1].nombre_apellidos<<"<-"<<endl;
//    /*Antes de registrar debo asegurar que no este repetida*/
//    //cin>>categoria;
//    fflush(stdin);
//    cin.getline(&usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias],20,'\n');
//    fflush(stdin);
//    cin.getline(&usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias],20,'\n');
//    fflush(stdin);
//    //usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias] =*categorias[*nC-1];
//    //cout<<categorias[*nC-1]<<endl;
//    //*categorias=&usuarios[num_usuarios+1].categorias[usuarios[num_usuarios+1].num_categorias];
//    for(unsigned short int j=0; j<20; j++)
//        cout<<usuarios[num_usuarios+1].categorias[j];

//    return usuarios;
//    //delete [] categorias;
//}


//char** reservar_memoria_Dinamica_incial(unsigned int *nC)
//{
//    //creando una matriz auxiliar para asignar espacio de memoria
//    char **mat_aux=new char*[*nC];
//    for(unsigned int i=0; i<*nC; i++){
//        mat_aux[i]=new char[20];
//    }
//    return mat_aux;
//    delete [] mat_aux;
//}

//===antepenultimo===
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
        cout<<"Usuario numero: "<<i-1<<endl;
        cout<<"Nombres y apellidos: "<<usuarios[i].nombre_apellidos<<endl;
        cout<<"Numero documento: "<<usuarios[i].d_i<<endl;
        cout<<"Numero celular: "<<usuarios[i].num_cel<<endl;
        cout<<"Edad: "<<usuarios[i].edad<<endl;
        cout<<"Vocacion: "<<usuarios[i].vocacion<<endl;
        cout<<"==================================================="<<endl;
     }
}
//===============================================================
void mostrar_matriz(char **matriz, int nC, datos_funciones_usuario *usuarios, unsigned int num_usuarios){

    cout<<"==== LISTA CATEGORIAS DEL USUARIO ->"<<usuarios[num_usuarios+1].nombre_apellidos<<"<- ===="<<endl;

    for (unsigned long int i=0; i<usuarios[num_usuarios+1].num_categorias; i++) {
            cout<<usuarios[num_usuarios+1].categorias<< endl;
    }
}

char** registrar_categoria(char **categorias, unsigned *nC,datos_funciones_usuario *usuarios, unsigned int num_usuarios){
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
    /*Se crea en nuevo espacio de memoria con su nuevo tamaño*/
    categorias=new char*[*nC];
    /*Se copia lo que tenía antes y estaba guardado en auxiliar*/
    for(unsigned int i=0; i<*nC; i++){
        categorias[i]=cat_aux[i];
    }
    delete [] cat_aux;
    /*Se crea en nuevo espacio para la categoria*/
    categorias[*nC-1]= new char[20];

    cout<<"Ingrese la categoria que quiere REGISTRAR para el usuario  ->"<<usuarios[num_usuarios+1].nombre_apellidos<<"<-"<<endl;
    /*Antes de registrar debo asegurar que no este repetida*/
    //cin>>categoria;
    cin>>categorias[*nC-1];
    usuarios[num_usuarios+1].categorias=categorias[*nC-1];
    usuarios[num_usuarios+1].num_categorias+=1;
    cout<<"numero categorias: "<<usuarios[num_usuarios+1].num_categorias<<endl;
    //cout<<categorias[*nC-1];
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
