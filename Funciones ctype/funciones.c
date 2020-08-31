#include "funciones.h"

int es_alfanum(int n){

    int i=65, letra=n;

    while(i<=122){
        if(letra==i){
            i=123;
        }
        else{
            i=97;
            if(letra==i){
                i=123;
            }
        }
    }

    return 0;
}
