#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    int x;
    double tol;

    printf("Ingrese valor de x:");
    scanf("%d",&x);

    printf("\nIngrese la tolerancia en decimales:");
    scanf("%lf",&tol);

    printf("\nEl valor aproximado de e: %f",calculo_e(x,tol));
    return 0;
}
