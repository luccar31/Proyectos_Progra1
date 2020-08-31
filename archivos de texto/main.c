//programa que lea un archivo binario y escriba los registros en un archivo de texto long. variable

/*

programa lee 1 registro binario
lo guardo en una variable t_alumno
escribo ese registro al archivo de texto

*/

#include "main.h"
#include <stdio.h>

void cargar_binario(const char*);

typedef struct
{   char nombre[30];
    int dni;
    int edad;
    //int notas[10];
    float prom;
}t_alumno;

int main()
{
    t_alumno alu;
    FILE *pf1,*pf2;
    char txt[] = "texto.txt",
         bin[] = "binario.dat";

    cargar_binario(bin);

    pf1 = fopen(bin,"rb");
    if(!pf1)
    {
        return 0;
    }

    pf2 = fopen(txt,"wt");
    if(!pf1)
    {
        return 0;
    }

    fread(&alu,sizeof(t_alumno), 1, pf1);
    while(!feof(pf1))
    {
        fprintf(pf2,"%s|%d|%d|%f\n",alu.nombre,alu.dni,alu.edad,alu.prom);
        fread(&alu,sizeof(t_alumno), 1, pf1);
    }

    fclose(pf1);
    fclose(pf2);

    return 0;
}

void cargar_binario(const char *path)
{
    FILE *pf;
    t_alumno vec_alu[]={
                {"Lucas Cadozo",41777347,32,7.8},
                {"Luas Cadozo",1342343,12,6.53},
                {"ucas Cardozo",3525435,3,3.5},
                {"Lucs Cardzo",54325,53,2.5},
                {"Lucas dozo",3452,1,4.52},
                {"Las Carozo",64357,2,4.554},
                {"Luas Cardozo",1351313,3,3.55},
                {"Lcas Cardozo",43543,54,4.533},
                {"Luca Cadozo",234,89,4.53}
                 };

    pf = fopen(path,"wb");
    if(!pf)
    {
        return 0;
    }

    fwrite(vec_alu,sizeof(vec_alu),1,pf);

    fclose(pf);
}
