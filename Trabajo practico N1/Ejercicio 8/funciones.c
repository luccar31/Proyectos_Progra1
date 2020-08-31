#include "funciones.h"

int prod_suma_naturales (int num1, int num2){

    int n=num1, m=num2, R=0, i;

    for(i=1;i<=m;i++){
        R+=n;
    }
    return R;
}
