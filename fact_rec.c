#include <stdio.h>

int fact_rec(const int x)
{
  if(0 == x)
  {
    return 1;
  }
  else
  {
    return x * fact_rec(x - 1);
  }
}

int main(void)
{
  int x = 5;
  printf("fact(%d) = %d\n", x, fact_rec(x));

  return 0;
}
