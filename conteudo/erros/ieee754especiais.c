#include <stdio.h> // printf()
#include <math.h>  // sqrt()

int
main()
  {
  double x = 1.0;
  double d;

  d = x/0.0;
  printf("%f/0.0 = %f\n", x, d);

  d = -x/0.0;
  printf("%f/0.0 = %f\n\n", -x, d);

  d = sqrt(-x);
  printf("sqrt(%f) = %f\n" , -x, d);

  return(0);
  }
