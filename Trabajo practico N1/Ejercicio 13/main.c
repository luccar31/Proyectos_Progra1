#include "main.h"

int main()
{
  unsigned int numero;

  printf("Ingrese un numero natural: \n");
  scanf("%i", &numero);

  if(esprimo(numero))
  {
      printf("Es primo!\n");
  }
  else
  {
      printf("No es primo!\n");
  }

  return 0;
}
