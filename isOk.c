#include <stdio.h>

int isOk(char e)
{
  int isOk;
  switch(e)
  {
    case 'A':
    case 'B':
      isOk = 1;
      break;

    case 'C':
    default:
      isOk = 0;
  }

  return isOk;
}

int isOk2(char e)
{
  int isOk = 0;
  if('A' == e || 'B' == e)
  {
    isOk = 1;
  }

  return isOk;
}



int main(void)
{
  char e = 'A';
  printf("isOk(%c) = %d\n", e, isOk(e));

  e = 'B';
  printf("isOk(%c) = %d\n", e, isOk(e));

  e = 'C';
  printf("isOk(%c) = %d\n", e, isOk(e));

  e = 'D';
  printf("isOk(%c) = %d\n", e, isOk(e));

  e = 'A';
  printf("isOk2(%c) = %d\n", e, isOk2(e));

  e = 'B';
  printf("isOk2(%c) = %d\n", e, isOk2(e));

  e = 'C';
  printf("isOk2(%c) = %d\n", e, isOk2(e));

  e = 'D';
  printf("isOk2(%c) = %d\n", e, isOk2(e));



  return 0;
}
