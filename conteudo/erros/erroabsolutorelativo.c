#include <stdio.h> // printf()
#include <math.h> // fabs()

int
main()
  {
  double x_exato = 100.0;
  double x_aproximado = 99.99;
  double erro_absoluto;
  double erro_relativo;

  erro_absoluto = fabs( x_exato - x_aproximado );
  printf("Erro Absoluto = %f\n", erro_absoluto); 

  erro_relativo = ( (fabs( x_exato - x_aproximado))/x_exato );
  printf("Erro Relativo = %f em porcentagem %f%%\n", erro_relativo, erro_relativo * 100.0); 
  }
