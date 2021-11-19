#include <stdio.h>

int sumWhile(int n)
{
  int sum = 0;
  int i = 0;
  while(i <= n)
  {
    sum += i;
    i++;
  }

  return sum;
}

int main(void)
{
  printf("%d\n", sumWhile(10));

  return 0;
}
