#include <stdio.h>

int main(void)
{
  int x = 10;
  int *px = &x;

  printf("x = %d, *px = %d\n", x, *px);

  x = 11;
  printf("x = %d, *px = %d\n", x, *px);
  
  *px = 12;
  printf("x = %d, *px = %d\n", x, *px);

  return 0;
}
