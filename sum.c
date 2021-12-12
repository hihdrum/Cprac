#include <stdio.h>

int add(int x, int y)
{
  return x + y;
}

int sum(int start, int end, int n, int (*func)(int))
{
  int acc = 0;

  int i;
  for(i = start; i <= end; i += n)
  {
    acc = add(acc, func(i));
  }

  return acc;
}

int mul(int x, int y)
{
  return x * y;
}

int prod(int start, int end, int n, int (*func)(int))
{
  int acc = 1;

  int i;
  for(i = start; i <= end; i += n)
  {
    acc = mul(acc, func(i));
  }

  return acc;
}

int acc(int tani, int (*com)(int, int), int start, int end, int n, int (*func)(int))
{
  int ac = tani;

  int i;
  for(i = start; i <= end; i += n)
  {
    ac = com(ac, func(i));
  }

  return ac;
}

int identity(int x)
{
  return x;
}

int sum1(int n)
{
  int acc = 0;

  int i;
  for(i = 0; i <= n; i++)
  {
    acc += identity(i);
  }

  return acc;
}

int square(int x) 
{
  return x * x;
}

int sum2(int n)
{
  int acc = 0;

  int i;
  for(i = 0; i <= n; i++)
  {
    acc += square(i);
  }

  return acc;
}

int main(void)
{
  printf("%d\n", sum1(10));
  printf("%d\n", sum1(100));

  printf("%d\n", sum2(10));
  printf("%d\n", sum2(100));

  printf("%d\n", sum(0, 10, 1, identity));
  printf("%d\n", sum(0, 100, 1, identity));

  printf("%d\n", sum(0, 10, 1, square));
  printf("%d\n", sum(0, 100, 1, square));

  printf("%d\n", prod(1, 5, 1, identity));

  printf("%d\n", acc(0, add, 0, 10, 1, identity));
  printf("%d\n", acc(1, mul, 1, 5, 1, identity));


  return 0;
}
