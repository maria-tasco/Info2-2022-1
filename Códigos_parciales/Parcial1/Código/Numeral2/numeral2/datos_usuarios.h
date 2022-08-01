#ifndef DATOS_USUARIOS_H
#define DATOS_USUARIOS_H
/*Se usa struct para poder almacenar diferentes tipos de datos en un arreglo. Los datos
aquí almacenados son los datos del usuario*/
struct datos_usuarios
{
    //datos_usuarios() {}
    char nombre_apellidos[20]; //dinamico
    unsigned long long int d_i;
    unsigned long long int num_cel;
    unsigned short int edad;
    char vocacion[20]; //dinamico
};

unsigned short menu();
datos_usuarios *registrar_usuarios(datos_usuarios *usuarios, unsigned int *ptr_nU);
void mostrar_usuarios(datos_usuarios *usuarios, unsigned int *ptr_nU);
#endif // DATOS_USUARIOS_H
