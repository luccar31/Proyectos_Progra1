#include "matematicas.h"
//Implementación de las funciones de matemáticas

int factorial (int n){

    //comprobacion de tipo de dato
    char aux[20]; //creamos un buffer auxiliar
    itoa(n, aux, 10); //convertimos el argumento recibido a una cadena

    if (!is_integer(aux)) { //comprobamos que es un entero. si no es, retorna NOT DEFINE
        return ND;
    }

    if (n < 0){
        return ND; //comprobamos que el numero sea positivo
    }

    int R = 1;

    if (n <= 0){
        return 1;
    }
    for (int i=1 ; i <= n ; i++){
        R *= i;
    }
    return R;
}

int combinatorio (int m, int n){

    //comprobacion de tipo de dato
    char aux[20]; //creamos un buffer auxiliar
    itoa(m, aux, 10); //convertimos el argumento recibido a una cadena

    if (!is_integer(aux)) { //comprobamos que es un entero. si no es, retorna NOT DEFINE
        return ND;
    }

    itoa(n, aux, 10); //convertimos el argumento recibido a una cadena

    if (!is_integer(aux)) { //comprobamos que es un entero. si no es, retorna NOT DEFINE
        return ND;
    }

    if (!(m >= n && n >= 0)) { //se comprueba las condiciones para poder hacer el calculo
        return ND;
    }
    return (factorial(m)/(factorial(n)*factorial(m-n)));
}

double exponential_e(int x, float TOL){

    double R = 0, term;
    int i = 0;

    do{
        term = pow(x,i)/factorial(i);
        R += term;
        i++;
    }while (term > TOL);

    return R;
}

double square_root(int numero, float TOL){

	if(numero < 0){
        return ND;
	}

	double term = 1, term_ant;

	do{

		term_ant = term;
		term += (1/2) * (term_ant + ((double)numero/term_ant));

	}while((term_ant - term) > TOL);

	return term;
}

void is_Fibonacci(void){
    printf("Proximamente\n");
}
void sen(void){
    printf("Proximamente\n");
}
void is_perfect(void){
    printf("Proximamente\n");
}
void prodbysums(void){
    printf("Proximamente\n");
}
void restof(void){
    printf("Proximamente\n");
}
void sum_natural(void){
    printf("Proximamente\n");
}
void sum_even_natural(void){
    printf("Proximamente\n");
}
void sum_even_lessth_n(void){
    printf("Proximamente\n");
}
void is_prime(void){
    printf("Proximamente\n");
}

int is_integer(char *strg){

   int i, valor;

   for(i=0; i < strlen(strg); i++)
   {
      valor = strg[ i ] - '0';

      if(valor < 0 || valor > 9)
      {
          if(i==0 && valor==-3) continue;

          return 0;
      }
   }
   return 1;
}

int is_decimal(char *strg)
{
   int i, valor;
   int tiene_punto = 0;


   for(i=0; i < strlen(strg); i++)
   {
      valor = strg[ i ] - '0';

      if(valor < 0 || valor > 9)
      {
          /* El primer caracter es: - */
         if(i==0 && valor==-3) continue;

         /* Verifica que solo tenga un: . */
         if(valor==-2 && !tiene_punto)
         {
            tiene_punto=1;
            continue;
         }

         return 0;
      }
   }
   return 1;
}
