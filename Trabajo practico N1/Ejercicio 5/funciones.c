#include "funciones.h"

int fibonacci (int n){

    int termino_f,a=0,b=1;

    int num=n;

    while(num>termino_f){

        termino_f=a+b;
        a=b;
        b=termino_f;
    };

    if (termino_f==num){
        return 1;
    }
    else{
        return 0;
    }

}
