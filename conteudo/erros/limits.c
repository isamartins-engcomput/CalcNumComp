#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <float.h>
#include <fcntl.h>

int 
main() 
  {
  printf("Valores de uma variavel do tipo 'char'\n");    
  printf("\tValor minimo -> %d e valor maximo -> %d, ", CHAR_MIN, CHAR_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(char));

  printf("Valores de uma variavel do tipo 'signed char'\n");
  printf("\tValor minimo -> %d e valor maximo -> %d, ", SCHAR_MIN, SCHAR_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(signed char));

  printf("Valores de uma variavel do tipo 'unsigned char'\n");
  printf("\tValor minimo -> %u e valor maximo -> %u, ", 0, UCHAR_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(unsigned char));

  printf("Valores de uma variavel do tipo 'int'\n");
  printf("\tValor minimo -> %d e valor maximo -> %d, ", INT_MIN, INT_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(int));

  printf("Valores de uma variavel do tipo 'unsigned int'\n");
  printf("\tValor minimo -> %u e valor maximo -> %u, ", 0, UINT_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(unsigned int));

  printf("Valores de uma variavel do tipo 'short int'\n");
  printf("\tValor minimo -> %d e valor maximo -> %d, ", SHRT_MIN, SHRT_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(short int));

  printf("Valores de uma variavel do tipo 'unsigned short int'\n");
  printf("\tValor minimo -> %d e valor maximo -> %d, ", 0, USHRT_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(unsigned short int));

  printf("Valores de uma variavel do tipo 'long int'\n");
  printf("\tValor minimo -> %ld e valor maximo -> %ld, ", LONG_MIN, LONG_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(long int));

  printf("Valores de uma variavel do tipo 'unsigned long int'\n");
  printf("\tValor minimo -> %lu e valor maximo -> %lu, ", 0, ULONG_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(unsigned long int));

  printf("Valores de uma variavel do tipo 'long long int'\n");
  printf("\tValor minimo -> %lld e valor maximo -> %lld, ", LLONG_MIN, LLONG_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(long long int));

  printf("Valores de uma variavel do tipo 'unsigned long long int'\n");
  printf("\tValor minimo -> %llu e valor maximo -> %llu, ", 0, ULLONG_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(unsigned long long int));

  printf("Valores de uma variavel do tipo 'float'\n");
  printf("\tValor minimo -> %g e valor maximo -> %g, ", FLT_MIN, FLT_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(float));
	
  printf("Valores de uma variavel do tipo 'double'\n");
  printf("\tValor minimo -> %e e valor maximo -> %e, ", DBL_MIN, DBL_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(double));

  printf("Valores de uma variavel do tipo 'long double'\n");
  printf("\tValor minimo -> %Lg e valor maximo -> %Lg, ", LDBL_MIN, LDBL_MAX);
  printf("Tamanho em BYTES -> %d\n\n", sizeof(long double));

  return 0;
  }

