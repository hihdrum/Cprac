#include <stdio.h>

int main(void)
{
  char a = 'a';
  printf("a = %c\n", a);

  printf("sizeof(char) = %zd\n", sizeof(char));
  printf("sizeof(a) = %zd\n", sizeof(a));

  return 0;
}
