#include "funciones.h"

void imprimir_vector(const int v[])
{
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("%d\t", v[i]);
    }
    printf("\n");
}

void eliminar_elemento(int v[], int pos)
{
    v[pos-1]=0;
}
