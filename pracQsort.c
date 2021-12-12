#include <stdlib.h>
#include <stdio.h>

int comp(const void *a, const void *b)
{
  return *(int *)a >= *(int *)b;
}

int main(void)
{
  int ia[10];

  int i;
  for(i = 0; i < sizeof(ia)/sizeof(int); i++)
  {
    ia[i] = rand() % 100;
  }

  for(i = 0; i < sizeof(ia)/sizeof(int); i++)
  {
    printf("%d,", ia[i]);
  }
  putchar('\n');

  qsort(ia, sizeof(ia)/sizeof(int), sizeof(int), comp);

  for(i = 0; i < sizeof(ia)/sizeof(int); i++)
  {
    printf("%d,", ia[i]);
  }
  putchar('\n');

  return 0;
}
