#include <stdio.h>

char evalTest(int x)
{
  if(75 <= x)
  {
    return 'A';
  }
  else if(50 <= x)
  {
    return 'B';
  }
  else if(25 <= x)
  {
    return 'C';
  }

  return 'D';
}

int main(void)
{
  int x = 100;
  printf("evalTest(%d) = %c\n", x, evalTest(x));

  x = 74;
  printf("evalTest(%d) = %c\n", x, evalTest(x));

  x = 49;
  printf("evalTest(%d) = %c\n", x, evalTest(x));

  x = 24;
  printf("evalTest(%d) = %c\n", x, evalTest(x));

  return 0;
}
