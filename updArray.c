#include <stdio.h>

void updArray(int *ia, int size)
{
  int i;
  for(i = 0; i < size; i++)
  {
    ia[i] = ia[i] * ia[i];
  }
}

void updArray2(int *ia, int *ib, int size)
{
  int i;
  for(i = 0; i < size; i++)
  {
    ib[i] = ia[i] * ia[i];
  }
}

int main(void)
{
  int ia[] = { 1, 2, 3, 10, 100 };

  int i;
  for(i = 0; i < sizeof(ia)/sizeof(int); i++)
  {
    printf("%d,", ia[i]);
  }
  putchar('\n');

  int ib[5]; 
  updArray2(ia, ib, sizeof(ia)/sizeof(int));

  for(i = 0; i < sizeof(ia)/sizeof(int); i++)
  {
    printf("%d,", ia[i]);
  }
  putchar('\n');

  for(i = 0; i < sizeof(ia)/sizeof(int); i++)
  {
    printf("%d,", ib[i]);
  }
  putchar('\n');
 
  return 0;
}
