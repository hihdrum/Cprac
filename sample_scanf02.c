#include <stdio.h>

int main(void)
{
  printf("整数値を入力して下さい : ");

  int in;
  int *pin = &in;

  scanf("%d", pin);

  printf("入力された整数値は、%dでした。\n", in);
  printf("入力された整数値は、%dでした。\n", *pin);

  return 0;
}
