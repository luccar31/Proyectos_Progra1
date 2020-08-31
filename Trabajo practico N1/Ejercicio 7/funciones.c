#include "funciones.h"

int div_pda(int x){

    int N=x, sumd=0, i;

    for(i=1;i<N;i++){
        if(N%i==0){
            sumd+=i;
        }
    }
    return sumd;
}
