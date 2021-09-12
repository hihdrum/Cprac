#include <stdio.h>

int main(void)
{
  float f = 1.4142;
  printf("f = %.3f\n", f);
  printf("d = %d\n", (int)f);

  int d = 1.2;
  printf("d = %d\n", d);
  printf("d = %.2f\n", (float)d);

  return 0;
}
