#include <stdio.h>

float square_float(float x)
{
  return x * x;
}

float cube_float(float x)
{
  return x * square_float(x);
}

float quad_float(float x)
{
  return square_float(square_float(x));
}

int main(void)
{
  float x = 1.4142;
  printf("square_float(%f) = %f\n", x, square_float(x));
  printf("cube_float(%f) = %f\n", x, cube_float(2.0));
  printf("quad_float(%f) = %f\n", x, quad_float(2.0));

  return 0;
}
