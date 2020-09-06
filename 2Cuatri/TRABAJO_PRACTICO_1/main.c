#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int);
int combinatorio(int,int);
double funcion_exp(int x, float TOL);

int main()
{
    int n, m, x;
    float TOL = 0.001;

//    printf("Ingrese numero n:");
//    scanf("%i",&n);
//
//    printf("\nSu factorial es: %i",factorial(n));
//
//    printf("\nIngrese numero m:");
//    scanf("%i",&m);
//
//    printf("\nEl combinatorio de n y m es: %i",combinatorio(m,n));

    printf("\nSeleccione un numero \"x\" para calcular e^x:");
    scanf("%i",&x);
    printf("e^%i = %f",x,funcion_exp(x,TOL));

    return 0;

}

int factorial (int n){

    int R = 1;

    if(n <= 0){
        return 1;
    }

    for (int i=1 ; i <= n ; i++){
        R *= i;
    }
    return R;
}

int combinatorio (int m, int n){

    if (!(m >= n && n >= 0))
    {
        return 0;
    }
    return (factorial(m)/(factorial(n)*factorial(m-n)));
}

double funcion_exp(int x, float TOL){

    double R = 0, term;
    int i = 0;

    do{
        term = pow(x,i)/factorial(i);
        R += term;
        i++;
    }while (term > TOL);

    return R;
}
