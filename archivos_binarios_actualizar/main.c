#include "main.h"

int main()
{
    FILE *pf;
    t_alumno alu;

    cargar_archivo1("alumnos.bin");

    pf = fopen("alumnos.bin","r+b");

    if(!pf)
    {
        printf("Error en la apertura\n");
        return 1;
    }

    fread(&alu,sizeof(t_alumno),1,pf);
    while(!feof(pf))
    {
        printf("%s - %d - %d\n",alu.nombre,alu.dni,alu.edad);
        fread(&alu,sizeof(t_alumno),1,pf);
    }

    rewind(pf);

    fread(&alu, sizeof(t_alumno),1,pf);
    while(!feof(pf))
    {
        if(alu.dni<100 && alu.edad != 50)
        {
            alu.edad = 50; //ACTUALIZO EL REGISTRO EN LA VARIABLE ALU
            fseek(pf,(long)-sizeof(t_alumno),SEEK_CUR); //ME MUEVO CON EL PUNTERO HACIA DONDE ESTÁ EL REGISTRO QUE QUIERO MODIFICAR
            fwrite(&alu, sizeof(t_alumno),1,pf);//ESCRIBO LA MODIFICACION EN EL ARCHIVO Y SE MUEVE EL PUNTERO HACIA EL SIGUIENTE REGISTRO
            fseek(pf, 0,SEEK_CUR);//RESEO EL ESTADO DEL ARCHIVO CON FSEEK PARA QUE SE PUEDA LEER, PORQUE NO PUEDO LEER ESTOY ESCRIBIENDO Y VICEVERSA
        }
        fread(&alu, sizeof(t_alumno),1,pf);
    }

    fseek(pf, 0, SEEK_SET);//VUELVO EL PUNTERO DEL ARCHIVO AL PRINCIPIO ENTONCES PUEDO REALIZAR OPERACIONES CON EL DESDE EL COMIENZO
    //rewind(pf);

    printf("\nLectura despues de actualizacion\n");

    fread(&alu,sizeof(t_alumno),1,pf);
    while(!feof(pf))
    {
        printf("%s - %d - %d\n",alu.nombre,alu.dni,alu.edad);
        fread(&alu,sizeof(t_alumno),1,pf);
    }

    fclose(pf);

    return 0;
}
