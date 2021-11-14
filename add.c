#include <stdio.h>

int add(int x, int y)
{
  return x + y;
}

int main(void)
{
  int x = 1;
  int y = 2;
  printf("add(%d, %d) = %d\n", x, y, add(x, y));

  return 0;
}
