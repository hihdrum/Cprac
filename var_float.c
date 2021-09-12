#include <stdio.h>

int main(void)
{
  float f = 1.142;
  printf("f = %f\n", f);

  printf("sizeof(float) = %zd\n", sizeof(float));
  printf("sizeof(f) = %zd\n", sizeof(f));

  return 0;
}
