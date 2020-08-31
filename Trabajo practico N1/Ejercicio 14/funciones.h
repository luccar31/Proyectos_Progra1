#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia,
        mes,
        anio;
} tFecha;

int validar_fecha(tFecha fecha);

#endif // FUNCIONES_H_INCLUDED
