#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

typedef struct
{   char nombre[30];
    int dni;
    int edad;
    int notas[10];
    float prom;
}t_alumno;

int ingresar_datos(t_alumno *); //le mando un puntero a la estructura t_alumno del main para cargar los datos con esa variable estructura
int cargo_vector_notas(int []); //le mando el vector notas asi lo cargo
float promedio_vec_notas(int,int []); //le  mando el vector notas para conseguir sacar el promedio y devolverlo como valor

#endif // FUNCIONES_H_INCLUDED
