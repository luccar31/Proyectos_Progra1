#include "funciones.h"

void mostrar_alumno(t_alumno *alum)
{
    system("cls");

    printf("Datos del alumno\n");
    printf("\n");

    printf("%d - %s - %d - %f - ",alum->dni,alum->nombre,alum->edad,alum->prom);
    for (int i=0;i < 10;i++)
    {
        if (alum->notas[i] != 0)
        printf("%d ",alum->notas[i]);
    }
}
