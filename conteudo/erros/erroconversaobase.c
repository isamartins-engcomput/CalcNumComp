#include <stdio.h> //printf()

int
main()
  {
  float x = 0.2;

  printf("Padrao = %f\n", x); 
  printf("Com precisao de 9 digitos = %.9f\n", x);
  
  if((x > 0.199999999) && (x < 0.200000003))
    {
    printf("0,2\n");
    } 
  return(0);
  }
