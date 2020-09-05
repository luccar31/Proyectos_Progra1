#include "funciones.h"

void mostrar_ascii(void){

    int columna = 0;
    char bin[9];

    for(int ascii = 41;ascii <= 255;ascii++, columna++){

        if(columna%3 == 0){
            printf("\n");
        }
        itoa(ascii, bin, 2);
        printf("%0*i|%0*x|%0*o|%-8s|%c\t\t",3,ascii,3,ascii,3,ascii,bin,ascii);
    }
}
