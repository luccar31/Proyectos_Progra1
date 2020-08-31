#include "main.h"

int main()
{
    FILE *pf;
    char archivo[] = "archivo.bin";//almacena la direccion del archivo

    t_alumno alumno;
    t_alumno *p_alu;
    p_alu = &alumno; //puntero a la variable estructura del tipo t_alumno

    pf = fopen(archivo,"wb");//abro archivo

    if(!pf) //compruebo si se abrio correctamente
    {
        printf("Error en apertura");
        return 1;
    }

    while (ingresar_datos(p_alu))
    {
        //mostrar_alumno(p_alu);
        fwrite(p_alu, sizeof(t_alumno), 1, pf);
    }

    fclose(pf);

    return 0;
}
