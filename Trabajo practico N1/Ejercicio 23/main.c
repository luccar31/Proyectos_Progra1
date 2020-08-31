#include "main.h"

int main()
{
    int vector[TAM] ={1,-1,4,84,6,20,423,1000,32,-1000};
    int elemento;

    imprimir_vector(vector);
    orden_burbuja(vector);
    imprimir_vector(vector);

    printf("\nIngrese elemento a insertar:");
    scanf("%d",&elemento);
    printf("\n");

    insertar_elemento(vector,elemento);
    imprimir_vector(vector);

    return 0;
}
