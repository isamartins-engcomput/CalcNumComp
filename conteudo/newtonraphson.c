#include <stdio.h> //printf(), FILE, NULL, fprintf()
#include <stdlib.h> //exit()
#include <math.h> //expf(), fabs()

float
f_x(float x)
  {
  float y;

  y = expf(x) + (x/2.0);
  
  return(y);
  } 

float
derivada_f_x(float x)
  {
  float y;

  y = expf(x) + 0.5;

  return(y);
  }

float
newtonraphson(float x0, float precisao, FILE *arquivo)
  {
  float x1, x1_anterior, resultado_f_x, resultado_derivada_f_x;
  int iteracoes = 0;

  x1_anterior = 2 * precisao;

  printf("i, xi, xi+1, precisao\n");
  fprintf(arquivo,"i, xi, xi+1, precisao\n");
  while( fabs(x0 - x1_anterior) > precisao )
    {
    x1_anterior = x0;
    resultado_f_x = f_x(x0);
    resultado_derivada_f_x = derivada_f_x(x0);
    x1 = x0 - ( resultado_f_x/resultado_derivada_f_x );
    x0 = x1;

    iteracoes++;
    fprintf(arquivo,"%d, %f, %f, %f\n", iteracoes, x1_anterior, x1, precisao);
    printf("%d, %f, %f, %f\n", iteracoes, x1_anterior, x1, precisao);
    }

  return(x1);
  }

int
main()
  {
  float raiz;
  FILE *arquivo;
  float x;
  float precisao; 

  arquivo = NULL;
  precisao = 0.0001; // Precisao de 4 casas decimais
  arquivo = fopen("newtonraphson.csv","wt");
  if(arquivo == NULL)
    {
    exit(0);
    }

  printf("Entre com valor para x: ");
  scanf("%f", &x);

  raiz = newtonraphson(x, precisao, arquivo);
  printf("raiz = %g\n", raiz);
  fprintf(arquivo, "raiz,%g\n", raiz);

  fclose(arquivo);
  	  
  return(0);
  }
