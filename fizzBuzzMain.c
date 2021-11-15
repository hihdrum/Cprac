#include <stdio.h>
#include <stdlib.h>

void printFizzBuzz(int x)
{
  if(x % 3 == 0 && x % 5 == 0)
  {
    printf("FizzBuzz");
  }
  else if(x % 3 == 0)
  {
    printf("Fizz");
  }
  else if(x % 5 == 0)
  {
    printf("Buzz");
  }
  else
  {
    printf("%d", x);
  }
}

int main(int argc, char *argv[])
{
  int num = atoi(argv[1]);
  printFizzBuzz(num);

  return 0;
}
