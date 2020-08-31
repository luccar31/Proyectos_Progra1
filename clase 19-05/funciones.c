#include "funciones.h"

int cant_dias_mes (int m, int a);
int es_bisiesto(int a);

int es_fecha_valida(const tFecha *f)
{
    if(f->a >= AN_MIN && f->a <= AN_MAX)
        if(f->m >= 1 && f->m <=12)
            if (f->d >= 1 && f->d <= cant_dias_mes(f->m, f->m))
                return 1;
    return 0;
}

int cant_dias_mes (int m, int a)
{
    static const char diasmes[]={31,28,31,30,31,30,31,31,30,31,30,31};  //la reserva de memoria va a ser hecha solo
                                                                        //una vez en todo el programa,
                                                                        //cuando se ejecute el programa
                                                                        //y se creo el vector, se deja en memoria
    return diasmes[m+1]; //faltaria que si el mes es = a 2 y el año es bisiesto devuelvo 29
}

int es_bisiesto(int a)
{
   return a % 400 == 0 || (a%100 != 0 && a%4 == 0); // si el año es multiplo de 400 el resto da 0
}
