#include <stdio.h>

int prodrec(const int x)
{
  if(x == 1)
  {
    return 1;
  }
  return x * prodrec(x - 1);
}

int main(void)
{
  printf("prodrec = %d\n", prodrec(5));

  return 0;
}
