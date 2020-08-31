#include "funciones.h"

double factorial (double n);
double combinatorio (double n, double m);

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

double combinatorio (double n, double m){

    double N=n,M=m,res;

    if (N>=0 && M>=N){
        res=(factorial(M))/(factorial(N)*factorial(M-N));
        return res;
    }
    else{
        return 0;
    }
}
