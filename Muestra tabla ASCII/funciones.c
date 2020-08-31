#include "funciones.h"

void mostrar(void){

    int i;

    for(i=0;i<=255;i++){

        if(i%3==0){
        printf("\n");
        }
        printf("%c|%d|%x\t\t",i,i,i);
    }
}
