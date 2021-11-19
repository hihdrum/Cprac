#include <stdio.h>

int isEven(int x)
{
  if(x % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main(void)
{
  int x = 5;
  printf("isEven(%d) = %d\n", x, isEven(x));

  x = 6;
  printf("isEven(%d) = %d\n", x, isEven(x));

  return 0;
}
