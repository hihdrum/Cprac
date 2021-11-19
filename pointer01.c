#include <stdio.h>

int main(void)
{
  int x = 10;
  int *px = &x;

  printf("xの値:%d, xのメモリアドレス:%p\n", x, &x);
  printf("pxの値:%p, pxのメモリアドレス: %p, pxが指すメモリアドレスに保持している値:%d\n", px, &px, *px);

  return 0;
}
