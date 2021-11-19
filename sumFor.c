#include <stdio.h>

int sumFor(int n)
{
  int sum = 0;
  int i;
  for(i = 0; i <= n; i++)
  {
    sum += i;
  }

  return sum;
}

int main(void)
{
  printf("%d\n", sumFor(10));

  return 0;
}
