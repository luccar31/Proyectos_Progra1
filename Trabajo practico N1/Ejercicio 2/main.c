#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(){

    double a,b;

    printf("Ingrese el primer numero 'n' :");
    scanf("%lf",&a);
    printf("\nIngrese el segundo numero 'm' :");
    scanf("%lf",&b);

    printf("\nEl resultado es: %f",combinatorio(a,b));
}
