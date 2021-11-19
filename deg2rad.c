#include <stdio.h>
#include <math.h>

double deg2rad(double deg)
{
  /* pi : 180 = rad : deg -> pi * deg = 180 * rad */
  return M_PI * deg / 180.0;  
}

int chartoint(char n)
{
  return n - '0';
}

int main(void)
{
  double deg = 0;
  printf("%f -> %f\n", deg, deg2rad(deg));

  deg = 90;
  printf("%f -> %f\n", deg, deg2rad(deg));

  deg = 180;
  printf("%f -> %f\n", deg, deg2rad(deg));

  printf("%f -> %f\n", M_PI, powf(M_PI, 2));
  printf("%f -> %f\n", M_PI, powf(M_PI, 3));
  printf("%f -> %f\n", M_PI, powf(M_PI, 4));

  char n = '0';
  printf("%c -> %d\n", n, chartoint(n));

  n = '1';
  printf("%c -> %d\n", n, chartoint(n));

  n = '5';
  printf("%c -> %d\n", n, chartoint(n));

  n = '9';
  printf("%c -> %d\n", n, chartoint(n));


  return 0;
}
