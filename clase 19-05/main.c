#include "main.h"

int main()
{
    //tipo de dato abstracto

    tFecha f1 = {19,5,1600};
    if(es_fecha_valida(&f1))
    {
        printf("Es fecha valida\n");
    }

    return 0;
}
