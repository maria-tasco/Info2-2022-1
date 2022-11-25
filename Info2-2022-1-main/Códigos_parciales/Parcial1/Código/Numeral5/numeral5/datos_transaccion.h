#ifndef DATOS_TRANSACCION_H
#define DATOS_TRANSACCION_H


struct datos_transaccion{
    char fecha_hora_actual[25];
    unsigned long long int valor;
};

datos_transaccion *registrar_transacciones(char *fecha_hora_actual, datos_transaccion *transacciones, unsigned int *ptr_nT);
void mostrar_transacciones(datos_transaccion *transacciones, unsigned int *ptr_nT);
char *obtener_fecha_hora();

#endif // DATOS_TRANSACCION_H
