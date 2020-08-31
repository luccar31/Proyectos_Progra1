#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float raiz_cuadrada (float n, float tol);

float raiz_cuadrada (float n, float tol){

    int i;
    float num,ult_term,ault_term,TOL;

    num=n;
    ault_term=1;
    TOL=tol;
    i=2;

    ult_term=1/2*(ault_term+num/ault_term);
    printf("%f",ult_term);

    while(i<=10){

        printf("\nR%d:%f",i-1,ault_term);
        ult_term+=((1/2)*(ault_term+(num/ault_term)));
        ault_term=ult_term;
        i++;
    }

    printf("\nResultado: %f",ult_term);

    return ult_term;
}

