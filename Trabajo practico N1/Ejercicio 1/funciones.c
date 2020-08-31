#include "funciones.h"
#include <stdio.h>

double factorial (double n);

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

