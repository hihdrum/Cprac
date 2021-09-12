#include <stdio.h>

int add1(int x)
{
  return x + 1;
}

int main(void)
{
  int x = 10;
  printf("x + 1 = %d\n", add1(x));

  int x1 = add1(x);
  printf("x1 = %d\n", x1);

  return 0;
}
