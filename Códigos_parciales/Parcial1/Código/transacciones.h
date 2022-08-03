#ifndef TRANSACCIONES_H
#define TRANSACCIONES_H

struct datos_transaccion{
    char fecha_hora_actual[25];
    unsigned long long int valor;
};

unsigned short menu();
datos_transaccion *registrar_transacciones(char *fecha_hora_actual, datos_transaccion *transacciones, unsigned int *ptr_nT);
void mostrar_transacciones(datos_transaccion *transacciones, unsigned int *ptr_nT);
char *obtener_fecha_hora();
#endif // TRANSACCIONES_H
