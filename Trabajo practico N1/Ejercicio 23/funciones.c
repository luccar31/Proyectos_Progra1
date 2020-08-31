#include "funciones.h"

void orden_burbuja(int v[])
{
    int aux;
    int j,i;

    for(j = 0;j < TAM;j++)
    {
        for(i = 0;i < (TAM-1);i++)
        {
            if(v[i] > v[i+1])
            {
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

void imprimir_vector(const int v[])
{
    int i;

    for(i=0;i<TAM;i++)
    {
        printf("%d\t", v[i]);
    }
    printf("\n");
}

void insertar_elemento(int v[], int x)
{
    int i;

    for (i=0;i < TAM;i++)
    {
        if(i == 0 && x < v[i])
        {
            v[i] = x;
            break;
        }
        if(i == (TAM-1) && x > v[i])
        {
            v[i] = x;
            break;
        }
        if (x == v[i])
        {
            v[i] = x;
        }
        else if (x < v[i] && x > v[i-1])
        {
            v[i-1] = x;
        }
        else if (x > v[i] && x < v[i+1])
        {
            v[i+1] = x;
        }
    }
}
