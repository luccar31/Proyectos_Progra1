#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    float tol,n;

    printf("\nIngrese valor:");
    scanf("%f",&n);
    printf("\nIngrese tolerancia:");
    scanf("%f",&tol);

    printf("\nEl valor de la raiz cuadrada de %f es:%f",n,raiz_cuadrada(n,tol));
    return 0;
}
