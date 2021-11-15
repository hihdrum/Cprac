#include <stdio.h>

int sum(int x)
{
  if(0 == x)
  {
    return 0;
  }

  return x + sum(x - 1);
}

int main(void)
{
  int x = 10;
  printf("sum(%d) = %d\n", x, sum(x));

  return 0;
}
