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

int isEven2(int x)
{
  int ret = 0;
  if(x % 2 == 0)
  {
    ret = 1;
  }

  return ret;
}

int main(void)
{
  int x = 0;
  int ret = isEven(x);
  printf("isEven(%d) = %d\n", x, ret);

  x = 3;
  ret = isEven(x);
  printf("isEven(%d) = %d\n", x, ret);

  x = -2;
  ret = isEven(x);
  printf("isEven(%d) = %d\n", x, ret);

  x = -5;
  ret = isEven(x);
  printf("isEven(%d) = %d\n", x, ret);


  return 0;
}
