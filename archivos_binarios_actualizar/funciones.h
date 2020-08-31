#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct
{   char nombre[30];
    int dni;
    int edad;
    int notas[10];
    float prom;
}t_alumno;

int cargar_archivo1(char * path);

#endif // FUNCIONES_H_INCLUDED
