#include "funciones.h"

int sum_nat_par_2(int x){

    int num=x, i, aux=0;

    for(i=0;i<num;i++){
        if(i%2==0){
            aux+=i;
        }
    }

    return aux;
}
