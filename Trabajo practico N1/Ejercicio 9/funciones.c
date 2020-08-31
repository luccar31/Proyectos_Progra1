#include "funciones.h"

void division(int n, int m){

    int D=n, d=m;
    int i=0;

    while(D-d>=0 && m!=0){
        printf("%d\n",D);
        D=D-d;
        i++;
    }
    printf("%d\n",D);

    printf("C=%d\n",i);
    printf("R=%d",D);

}
