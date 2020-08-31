#include "funciones.h"

int suma_naturales_pares(int x){

    int num=x, i, aux=0;

    for(i=0;i<=num;i++){
        if(i%2==0){
            aux+=i;
        }
    }

    return aux;
}
