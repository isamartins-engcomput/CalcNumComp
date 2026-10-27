#include <stdio.h>
#include <string.h>


int
main()
  {
  float fracionario = 0.123456789;
  char inicio[] = "\nO valor do float = %.";
  char numero;
  char caracter;
  char f = 'f';
  char final = '\n';
  char concatenado[26];

  strcpy(concatenado,inicio);

  printf("Entre com o numero de casas do ponto flutuante:\n");
  scanf("%hhd", &numero);
  caracter = numero + 48;
  concatenado[22] = caracter;
  concatenado[23] = f;
  concatenado[24] = final;
  concatenado[25] = '\0';

  printf(concatenado, fracionario);

  return(0);
  }


