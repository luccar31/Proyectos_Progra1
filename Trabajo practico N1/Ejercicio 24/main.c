#include "main.h"

int main()
{
    int elemento;
    int vector[TAM] = {4,3,10,5,7,2,3,1,12,20};

    imprimir_vector(vector);

    printf("Ingrese la posicion del elemento a eliminar: ");
    scanf("%d",&elemento);

    eliminar_elemento(vector,elemento);
    imprimir_vector(vector);

    return 0;
}
