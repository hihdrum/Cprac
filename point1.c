#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main(void)
{
  struct point pa[50];

  int i;
  for(i = 0; i < 50; i++)
  {
    pa[i].x = rand() % 100;
    pa[i].y = rand() % 100;
  }

  for(i = 0; i < 50; i++)
  {
    printf("%f\t%f\n", pa[i].x, pa[i].y);
  }

  return 0;
}
