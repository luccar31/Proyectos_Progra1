#include "funciones.h"

int anio_ok(int _anio);
int mes_ok(int _mes);
int dia_ok(int _dia, int _mes, int _anio);

int validar_fecha(tFecha Fecha)
{

    tFecha fecha=Fecha;
    int anio, mes, dia;

    anio=anio_ok(fecha.anio);
    mes=mes_ok(fecha.dia);
    dia=dia_ok(fecha.dia, fecha.mes, fecha.anio);

    if (dia>0 && mes>0 && anio>0)
    {
        return 1;
    }

}

int anio_ok(int _anio)
{
    int anio=_anio;

    if (anio>0)
    {
        anio=anio;
    }
    else
    {
        anio=0;
    }
    printf("\nAÑO:%d",anio);
    return anio;
}

int mes_ok(int _mes)
{
    int mes=_mes;
    printf("\nMES:%d",mes);
    if (mes >=1 && mes <=12)
    {
        mes=mes;
        printf("\nMES:%d",mes);
    }
    else
    {
        mes=0;
        printf("\nMES:%d",mes);
    }
    printf("\nMES:%d",mes);
    return mes;
}

int dia_ok(int _dia, int _mes, int _anio)
{
    int dia=_dia, mes=_mes, anio=_anio;

    switch(mes)
    {
        //EVALUAMOS MES PARA DETERMINAR LOS DIAS QUE TIENE EL MES
        //TENEMOS UN 31 DIAS PARA LOS MESES 1, 3, 5, 7, 8, 10 Y 12
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: if (dia >=1 && dia<=31)
                 {
                     dia=dia;
                 }
        break;
        //TENEMOS 30 DIAS PARA LOS MESES 4, 6, 9, Y 11
        case 4:
        case 6:
        case 9:
        case 11: if (dia >=1 && dia <=30)
                 {
                     dia=dia;
                 }
        break;
        //TENEMOS AL MES 2 CON 2 POSIBILIDADES
        case 2: if (anio%4==0 && ((anio%100)!=0 || anio%400==0)) //SI ES AÑO BISIESTO TIENE 29 DIAS
                {
                    dia=dia;
                }
                else if (dia>=1 && dia <=28) //SI NO ES BISIESTO TIENE 28 DIAS
                {
                    dia=dia;
                }
        break;

        default: dia=0; //SI ES MES NO ES NINGUNO DE LOS CASOS DE ARRIBA SE LE ASIGNA 0 A DIA
        break;
    }
    printf("\nDIA:%d",dia);
    return dia;
}
