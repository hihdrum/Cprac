#include <stdio.h>

int sumrec(const int x)
{
  if(x == 0)
  {
    return 0;
  }
  return x + sumrec(x - 1);
}

int main(void)
{
  printf("sumrec = %d\n", sumrec(10));

  return 0;
}
