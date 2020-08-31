#include "main.h"

int main()
{
    int x;

    printf("Ingrese numero natural:");
    scanf("%d",&x);

    if(div_pda(x)==x){
        printf("\nEs perfecto");
    }
    else if(div_pda(x)>x){
        printf("\nEs abundante");
    }
    else{
        printf("\nEs deficiente");
    }

    return 0;
}
