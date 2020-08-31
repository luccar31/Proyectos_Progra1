#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){

    double n;

    printf("Ingrese el numero para calcular el factorial:");
    scanf("%lf",&n); //"lf" para leer double

    printf("\nEl resultado es: %f\n",factorial(n));

    return 0;
}

