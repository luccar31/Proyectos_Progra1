#include "funciones.h"
#include <math.h>

double factorial (double n);
double calculo_e (int n, double tol);

double factorial (double n){

    double num = n, res=1;
    int i;

    if (num==0){
        return 1;
    }
    for (i=1;i<=num ;i++){
        res*=i;
    }
    return res;
}


double calculo_e (int n, double tol){

    int x = n; //valor de x en la formula
    double aprox_e,TOL=tol,UT; //valor para la aproximacion
    int i; //iterador

    do{
    UT = (pow(x,i)/factorial(i));
    aprox_e += (pow(x,i)/factorial(i));
    i++;
    //printf("\nIteracion %d",i);
    //printf("\nValor aprox_e: %f",aprox_e);
    //printf("\nValor UT: %f",UT);

}while ((UT-TOL) > 0);

    return aprox_e;
}


