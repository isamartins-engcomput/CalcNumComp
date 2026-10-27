#include <stdio.h> //printf()

int
main()
  {
  float x;
  float y;
  float resultado;

  x = 1.0;
  y = 5.0;
  resultado = x/y;
  printf("Resultado de %f/%f = %f\n", x, y, resultado);
  if((resultado > 0.199999) && (resultado < 0.210000))
    {
    printf("\n0.2\n");
    }

  return(0);
  }
