//===ultimo===
/*#ifndef DATOS_USUARIO_H
#define DATOS_USUARIO_H
#include "categorias_gastos.h"
#include "datos_transaccion.h"

struct datos_funciones_usuario{
    //datos_usuarios() {}
    char nombre_apellidos[20]; //dinamico
    char vocacion[50]; //dinamico
    unsigned long long int d_i;
    unsigned long long int num_cel;
    unsigned short int edad;

    char **categorias;
    char **categorias_aux;
    unsigned long int num_categorias;
    unsigned long int *ptr_num_categorias=&num_categorias;
    datos_transaccion *transacciones;
};

datos_funciones_usuario *registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
//==========================================================================
void mostrar_matriz(datos_funciones_usuario *usuarios, unsigned int num_usuarios);
datos_funciones_usuario *registrar_categoria(datos_funciones_usuario *usuarios, unsigned int num_usuarios);
char **reservar_memoria_Dinamica_incial(unsigned long *nC);
#endif // DATOS_USUARIO_H*/
//===penultimo===
/*
#ifndef DATOS_USUARIO_H
#define DATOS_USUARIO_H
#include "categorias_gastos.h"
#include "datos_transaccion.h"

struct datos_funciones_usuario{
    //datos_usuarios() {}
    char nombre_apellidos[20]; //dinamico
    char vocacion[50]; //dinamico
    unsigned long long int d_i;
    unsigned long long int num_cel;
    unsigned short int edad;

    char *categorias;
    char *categorias_aux;
    unsigned long int num_categorias;
    datos_transaccion *transacciones;
};

datos_funciones_usuario *registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
//==========================================================================
void mostrar_matriz(datos_funciones_usuario *usuarios, unsigned int num_usuarios);
datos_funciones_usuario *registrar_categoria(char **categorias, unsigned *nC, datos_funciones_usuario *usuarios, unsigned int num_usuarios);
char **reservar_memoria_Dinamica_incial(unsigned int *nC);
#endif // DATOS_USUARIO_H*/
//===antepenultimo===
#ifndef DATOS_USUARIO_H
#define DATOS_USUARIO_H
#include "categorias_gastos.h"
#include "datos_transaccion.h"

struct datos_funciones_usuario{
    //datos_usuarios() {}
    char nombre_apellidos[20]; //dinamico
    char vocacion[50]; //dinamico
    unsigned long long int d_i;
    unsigned long long int num_cel;
    unsigned short int edad;

    char *categorias;
    unsigned long int num_categorias;
    datos_transaccion *transacciones;
};

datos_funciones_usuario *registrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
void mostrar_usuarios(datos_funciones_usuario *usuarios, unsigned int *ptr_nU);
//==========================================================================
void mostrar_matriz(char **matriz, int nC, datos_funciones_usuario *usuarios, unsigned int num_usuarios);
char **registrar_categoria(char **categorias, unsigned *nC, datos_funciones_usuario *usuarios, unsigned int num_usuarios);
char **reservar_memoria_Dinamica_incial(unsigned int *nC);
#endif // DATOS_USUARIO_H
