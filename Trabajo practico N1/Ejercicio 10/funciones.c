#include "funciones.h"

int suma_naturales(int x){

    int num=x, i, aux=0;

    for(i=0;i<=num;i++){
        aux+=i;
    }

    return aux;
}
