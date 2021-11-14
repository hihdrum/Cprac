#include <stdio.h>

int calcTax(int isKeigen, int value)
{
  if(isKeigen)
  {
    return (int)(1.08 * value);
  }

  return (int)(1.10 * value);
}

int main(void)
{
  int value = 100;

  printf("%d -> %d\n", value, calcTax(1, value));
  printf("%d -> %d\n", value, calcTax(0, value));

  return 0;
}

