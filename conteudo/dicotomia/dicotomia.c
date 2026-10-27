#include <stdio.h>
#include <math.h>

float anterior;
float fxanterior;
float posterior;
float fxposterior;

int 
buscainversao(float inicio, float fim)
  {
  float x = inicio;
  float fx = 0.0;

  printf("----------------------------------\n");
  printf("|  x        | f(x) = (e^(x)) + (x/2)     |\n");
  printf("----------------------------------\n");
  while(x <= fim)
    {
    fx = (expf(x)) + (x/2);  

    if(fx < 10.0)
      {	    
      printf("| %+f | %+f          |\n", x, fx);
      }
    if((fx >= 10.0) && (fx < 100.0))
      {
      printf("| %+f | %+f         |\n", x, fx);     
      }	    
    if(fx >= 100.0)
      {
      printf("| %+f | %+f        |\n", x, fx);     
      }	    

    if(x == inicio)
      {
      anterior = x;
      fxanterior = fx;
      }
    if(x != inicio) 
      {
      posterior = x;
      fxposterior = fx;
      if((fxanterior < 0.0) && (fxposterior >= 0.0))
        {
        printf("----------------------------------\n"); 
        return(0);
        }
      if(fxanterior != fxposterior)
        {
        anterior = x;
        fxanterior = fx;
        }
      }
//    x += 0.001;
//    x += 0.01;
    x += 0.1;
    }
  printf("----------------------------------\n"); 
  return(0);
  }

float
dicotomia(float xa, float xb, float precisao)
  {
  float xc, anterior, f_xa, f_xb, f_xc;
  int iteracoes = 0;

  anterior = xb;
  xc = xa;

  printf("\n");  
  printf("-----------------------------------------------------------------------------\n");  
  printf("| n  | xa        | xb        | xc        | f(xa)     | f(xb)     | f(xc)     |\n");  
  printf("-----------------------------------------------------------------------------\n");  
  while(fabs(xc - anterior) > precisao)
    {
    iteracoes++;

    anterior = xc;
    xc = (xa + xb) / 2.0;

    f_xa = (expf(xa)) + (xa/2);
    f_xb = (expf(xb)) + (xb/2);
    f_xc = (expf(xc)) + (xc/2);
  
    if( iteracoes < 10)
      {
      printf("| %d  | %+f | %+f | %+f | %+f | %+f | %+f |\n", iteracoes, xa, xb, xc, f_xa, f_xb, f_xc);
      }
    if( iteracoes >= 10)
      {
      printf("| %d | %+f | %+f | %+f | %+f | %+f | %+f |\n", iteracoes, xa, xb, xc,  f_xa, f_xb, f_xc);
      }


    if( f_xa * f_xc < 0.0)
      {
      xb = xc;
      }
    else
      {
      if( f_xb * f_xc < 0.0)
        {
        xa = xc;
        }
      }
    }
  printf("--------------------------------------------------\n");

  printf("Numero de iteracoes = %d\n", iteracoes);
  return (xc);
  }

int
main()
  {
  float raiz = 0.0;
//  float inicio = 0.0;
//  float fim = 0.0;
  float inicio = -1.0;
  float fim = -0.1;

/*  printf("(e^(x)) + (x/2)\n");
  printf("\n[\n");
  scanf("%f", &inicio);
  printf(",\n");
  scanf("%f", &fim);
  printf("]\n"); */
  buscainversao(inicio, fim);
  raiz = dicotomia(anterior, posterior, 0.0001);
  printf("raiz = %.6g\n", raiz);

  return(0);
  }
