#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factorial(int);
int combinatorio(int,int);

int main()
{
    int n, m;

    printf("Ingrese numero n:");
    scanf("%i",&n);

    printf("\nSu factorial es: %i\n",factorial(n));

    printf("Ingrese numero m:");
    scanf("%i",&m);

    printf("\nEl combinatorio de n y m es: %i",combinatorio(m,n));

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

int funcion_exp(int x, float TOL){

    int R = 0;

    for(int i=0; i <= x && R;i++){
        R += pow(x,i)/factorial(x);
    }

    return R;
}
