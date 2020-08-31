#include "main.h"

int main()
{
    double x, tol;

    printf("Ingrese numero:");
    scanf("%lf",&x);
    printf("\nIngrese tolerancia:");
    scanf("%lf",&tol);

    printf("\nEl resultado es:%f",seno(x,tol));
    return 0;
}
