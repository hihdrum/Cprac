#include <stdio.h>

int main(void)
{
  printf("整数値を入力して下さい : ");

  int in;
  scanf("%d", &in);

  printf("入力された整数値は、%dでした。\n", in);

  return 0;
}
