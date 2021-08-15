#include <stdio.h>

int main(void)
{
  int sum = 0;

  int i = 0;
  while(i <= 10)
  {
    sum += i;
    i++;
  }

  printf("sum = %d\n", sum);

  return 0;
}
