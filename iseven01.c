#include <stdio.h>

int isEven(int x)
{
  int isEven = 0;
  if(x % 2 == 0)
  {
    isEven = 1;
  }

  return isEven;
}

int main(void)
{
  int x = 5;
  printf("isEven(%d) = %d\n", x, isEven(x));

  x = 6;
  printf("isEven(%d) = %d\n", x, isEven(x));

  return 0;
}
