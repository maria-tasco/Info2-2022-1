#ifndef DATOS_USUARIO_H
#define DATOS_USUARIO_H
#include "categorias_gastos.h"
#include "datos_transaccion.h"

struct datos_usuarios
{
    //datos_usuarios() {}
    char nombre_apellidos[20]; //dinamico
    unsigned long long int d_i;
    unsigned long long int num_cel;
    unsigned short int edad;
    char vocacion[20]; //dinamico
};
struct datos_funciones_usuario{
    datos_usuarios usuario;
    char *categorias;
    datos_transaccion transacciones;
};

datos_funciones_usuario *registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
#endif // DATOS_USUARIO_H
