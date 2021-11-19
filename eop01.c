#include <stdio.h>

int main(void)
{
  int x = 1;
  int y = 1;
  printf("%d == %d = %d\n", x, y, x == y);
  printf("%d != %d = %d\n", x, y, x != y);
  printf("%d <  %d = %d\n", x, y, x < y);
  printf("%d >  %d = %d\n", x, y, x > y);
  printf("%d <= %d = %d\n", x, y, x <= y);
  printf("%d >= %d = %d\n", x, y, x >= y);

  y = 2;
  printf("%d == %d = %d\n", x, y, x == y);
  printf("%d != %d = %d\n", x, y, x != y);
  printf("%d <  %d = %d\n", x, y, x < y);
  printf("%d >  %d = %d\n", x, y, x > y);
  printf("%d <= %d = %d\n", x, y, x <= y);
  printf("%d >= %d = %d\n", x, y, x >= y);

  printf("\n");

  printf("%d && %d = %d\n", 0, 0, 0 && 0);
  printf("%d && %d = %d\n", 0, 1, 0 && 1);
  printf("%d && %d = %d\n", 1, 0, 1 && 0);
  printf("%d && %d = %d\n", 1, 1, 1 && 1);

  printf("\n");

  printf("%d || %d = %d\n", 0, 0, 0 || 0);
  printf("%d || %d = %d\n", 0, 1, 0 || 1);
  printf("%d || %d = %d\n", 1, 0, 1 || 0);
  printf("%d || %d = %d\n", 1, 1, 1 && 1);

  return 0;
}
