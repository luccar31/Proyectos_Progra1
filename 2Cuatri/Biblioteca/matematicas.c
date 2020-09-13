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

int is_Fibonacci(int n){

    int termino = 1;

    while (termino <= n){
        if(termino == n){
            return TRUE;
        }
        termino += termino;
    }

    return FALSE;
}
double sen(double x, double TOL){

//    double r = 0, term = -1;
//    int i = 1;
//
//    do{
//
//		term *= -pow(x,i)/i;
//        if (i%2 != 0)
//            r += term;
//        i++;
//
//	  }while(valor_absoluto(term) > TOL);
//
//    return r;
    printf("Proximamente\n");
    return 0;
}
int is_perfect(int n){

    int sum = 0;

    for(int i=1;i < n;i++){
        if(n%i == 0)
            sum+=i;
    }

    if(sum == n) //perfecto
        return 1;
    if(sum < n) //deficiente
        return 2;
    if(sum > n) //abundante
        return 3;
}

int prodbysums(int n, int m){

    if (n < 0 || m < 0)
        return ND;

    int i, prod = 0;

    for(i = 0;i < n;i++){
        prod += m;
    }

    printf("Producto: %i\n", prod);
    return prod;
}

int restof(int n, int m){

    int C = 0;

    if (m <= 0)
        return ND;

    while ((n - m) >= 0){
        n -= m;
        C++;
    }
    printf("Resto: %i\n", n);
    printf("Cociente: %i\n", C);
    return C;
}
int sum_natural(int n){

    if(n < 0)
        return ND;

    int sum = 0;

    for(int i = n; i > 0;i--){
        sum += i;
    }

    printf("%i\n",sum);

    return sum;
}

int sum_even_natural(int n){

    if(n < 0)
        return ND;

    int sum = 0;

    for(int i = (n%2 != 0) ? n-1 : n; i > 0 ; i-=2){
        sum += i;
    }

    printf("%i\n",sum);

    return sum;
}
int sum_even_lessth_n(int n){

    if(n < 0)
        return ND;

    int sum = 0;

    for(int i = (n%2 != 0) ? n-1 : n-2; i > 0 ; i-=2){
        sum += i;
    }

    printf("%i\n",sum);

    return sum;
}
int is_prime(int n){

    if (n < 0)
        return ND;

    int div = 1;

    for(int i = 2;i <= n; i++){
        if(n%i == 0)
            div++;
    }

    return div == 2 ? TRUE : FALSE;
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

double valor_absoluto(double n){

    return (n >= 0) ? n  : (-n);
}
