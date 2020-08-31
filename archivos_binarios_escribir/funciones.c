#include "funciones.h"

int ingresar_datos(t_alumno *alu)
{
    int cn;

    char opc;
    printf("Ingresar alumno (s/n)? ");
    scanf("%c",&opc);

    if(toupper(opc) != 'S')
    {
        return 0;
    }

    fflush(stdin); //limpio el buffer porque ingrese un char

    printf("Nombre: ");
    gets(alu->nombre);
    fflush(stdin);
    printf("DNI: ");
    scanf("%d",&alu->dni);
    fflush(stdin);
    printf("Edad: ");
    scanf("%d",&alu->edad);
    fflush(stdin);
    printf("Ingreso de notas\n");
    cn = cargo_vector_notas(alu->notas);
    alu->prom = promedio_vec_notas(cn,alu->notas);
    printf("El promedio es: %f",alu->prom);

    Sleep(1800);

    return 1;
}

int cargo_vector_notas(int vec[])
{
    int i=0,
        nota,
        cn=0;

    do
    {
        printf("Ingrese nota %d: ",i+1);
        scanf("%d",&nota);
        vec[i] = nota;
        if(nota>0) cn++;
        i++;

    }while(i < 10 && nota != 0);

    fflush(stdin);

    return cn;

}
float promedio_vec_notas(int cn,int vec[])
{
    int i,sum=0;

    for (i=0;i<=cn;i++)
    {
        sum += vec[i];
    }

    return sum/cn;
}

//void mostrar_alumno(t_alumno *alum)
//{
//    system("cls");
//
//    printf("Datos del alumno\n");
//    printf("\n");
//
//    printf("%d - %s - %d - %f - ",alum->dni,alum->nombre,alum->edad,alum->prom);
//    for (int i=0;i < 10;i++)
//    {
//        if (alum->notas[i] != 0)
//        printf("%d ",alum->notas[i]);
//    }
//
//    Sleep(5000);
//    system("cls");
//}
