#include "main.h"

int main()
{
    int n;

    printf("Ingrese numero entero:");
    scanf("%d",&n);

    if(fibonacci(n)==1){
        printf("\nEs un numero de Fibonacci");
    }
    else{
        printf("\nNo es un numero de Fibonacci");
    }
    return 0;
}
