#include "main.h"

int main()
{
    tFecha Fecha;

    printf("Ingrese fecha formato (dd mm aaaa)");
    printf("\n\nFECHA:");
    scanf("%d",Fecha.dia);
    printf("/");
    scanf("%d",Fecha.mes);
    printf("/");
    scanf("%d",Fecha.anio);

    if(validar_fecha(Fecha)==1)
    {
        printf("\nFecha correcta");
    }
    else
    {
        printf("\nFecha incorrecta");
    }


    return 0;
}
