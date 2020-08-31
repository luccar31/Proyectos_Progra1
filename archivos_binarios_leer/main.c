#include "main.h"

int main()
{
    t_alumno alu;
    t_alumno *p_alu;
    p_alu = &alu;
    FILE *pf;

    printf("Leyendo archivo...\n");
    pf = fopen("archivo.bin","rb");

    if(!pf)
    {
        printf("Error en la apertura del archivo\n");
        return 0;
    }

    fread(&alu, sizeof(t_alumno), 1, pf); //para saber si llego a fin de archivo primero deberia leer algo
    while (!feof(pf))
    {
        mostrar_alumno(p_alu);
        fread(&alu, sizeof(t_alumno), 1, pf);
    }

    printf("Cerrando archivo...\n");
    fclose(pf);

    return 1;
}
