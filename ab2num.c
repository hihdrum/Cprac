#include <stdio.h>

int ab2num(char e)
{
  int num;
  switch(e)
  {
    case 'A':
      num = 4;
      break;

    case 'B':
      num = 3;
      break;

    case 'C':
      num = 2;
      break;

    default:
      num = 1;
  }

  return num;
}

int main(void)
{
  char e = 'A';
  printf("ab2num(%c) = %d\n", e, ab2num(e));

  e = 'B';
  printf("ab2num(%c) = %d\n", e, ab2num(e));

  e = 'C';
  printf("ab2num(%c) = %d\n", e, ab2num(e));

  e = 'D';
  printf("ab2num(%c) = %d\n", e, ab2num(e));

  return 0;
}
