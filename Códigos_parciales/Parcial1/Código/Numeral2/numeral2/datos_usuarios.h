#ifndef DATOS_USUARIOS_H
#define DATOS_USUARIOS_H

struct datos_usuarios
{
    //datos_usuarios() {}
    char nombre_apellidos[20]; //dinamico
    unsigned long long int d_i;
    unsigned long long int num_cel;
    char fecha_nacimiento[11];
    char vocacion[20]; //dinamico
};
unsigned short menu();
datos_usuarios **registrar_usuarios(datos_usuarios **usuarios, unsigned int *ptr_nU);
void mostrar_usuarios(datos_usuarios **usuarios);
#endif // DATOS_USUARIOS_H
