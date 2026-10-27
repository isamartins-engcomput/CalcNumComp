#include <stdio.h> //printf()
#include <math.h> // modff()

int
main()
  {
  float simples = 13.375;
  //float simples = 413.625;
  float inteiro;
  float fracao;
  float mantissa;
  int   expoente;

  printf("Padrao = %f\n", simples); 
  fracao = modff(simples, &inteiro);
  printf("Parte inteira = %f e fracionaria = %f\n\n", inteiro, fracao);
  printf("Cientifica = %e\n", simples);
  return(0);
  }
