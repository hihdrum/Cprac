#include <stdio.h>

int main(void)
{
  char ca[4] = {'A', 'B', 'C', 'D'};

  printf("ca          %p\n", ca);
  printf("ca[%d] = %c,  %p\n", 0, ca[0], &ca[0]);
  printf("ca[%d] = %c,  %p\n", 1, ca[1], &ca[1]);
  printf("ca[%d] = %c,  %p\n", 2, ca[2], &ca[2]);
  printf("ca[%d] = %c,  %p\n", 3, ca[3], &ca[3]);

  printf("----------------------------\n");

  char *cp = ca;
  printf("cp          %p\n", ca);
  printf("*(cp+0)= %c, %p\n", *(cp+0), cp+0);
  printf("*(cp+0)= %c, %p\n", *(cp+1), cp+1);
  printf("*(cp+1)= %c, %p\n", *(cp+2), cp+2);
  printf("*(cp+2)= %c, %p\n", *(cp+3), cp+3);


  return 0;
}
