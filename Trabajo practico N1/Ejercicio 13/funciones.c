#include "funciones.h"

int esprimo(int numero)
{
  if (numero == 0 || numero == 1) return 0;

  if (numero == 4) return 0;

  for (int x = 2; x < numero / 2; x++)
  {
    if (numero % x == 0) return 0;
  }

  return 1;
}
