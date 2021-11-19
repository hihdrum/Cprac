#include <stdio.h>

void funcNG(unsigned char x)
{
  x = 0xff;
}

void funcOK(unsigned char *x)
{
  *x = 0xff;
}

int main(void)
{
  unsigned char x = 0xaa;

  funcNG(x);
  printf("x = %x\n", x);

  funcOK(&x);
  printf("x = %x\n", x);

  return 0;

}
