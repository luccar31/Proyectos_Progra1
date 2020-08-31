#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define AN_MAX 5000
#define AN_MIN 1600

typedef struct
{
    int d,m,a;
}tFecha;

int es_fecha_valida(const tFecha *);

#endif // FUNCIONES_H_INCLUDED
