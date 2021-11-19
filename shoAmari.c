#include <stdio.h>

int shoAmari(int x, int y, int *sho, int *amari)
{
  int ret = -1;

  if(0 == y)
  {
    return ret;
  }

  ret = 0;

  *sho = x / y;
  *amari = x % y;

  return ret;
}

int main(void)
{
  int x, y, ret, sho = 0, amari = 0;

  x = 1;
  y = 0;
  ret = shoAmari(x, y, &sho, &amari);
  printf("shoAmari(%2d, %2d, %2d, %2d) = %2d\n", x, y, sho, amari, ret);

  x = 1;
  y = 1;
  ret = shoAmari(x, y, &sho, &amari);
  printf("shoAmari(%2d, %2d, %2d, %2d) = %2d\n", x, y, sho, amari, ret);

  x = 3;
  y = 2;
  ret = shoAmari(x, y, &sho, &amari);
  printf("shoAmari(%2d, %2d, %2d, %2d) = %2d\n", x, y, sho, amari, ret);

  x = 15;
  y = 4;
  ret = shoAmari(x, y, &sho, &amari);
  printf("shoAmari(%2d, %2d, %2d, %2d) = %2d\n", x, y, sho, amari, ret);

  return 0;

}
