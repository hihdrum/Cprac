#include <stdio.h>

int main(void)
{
  long int x = 0x0041424344454647;
  printf("%016lx\n", x);
  printf("%x\n", (int)x);
  printf("%x\n", (short int)x);
  printf("%x\n", (unsigned char)x);

  printf("%s\n", (char *)&x);

  printf("----------------\n");

  char ca[] = { 0x47, 0x46, 0x45, 0x44, 0x43, 0x42, 0x41, 0x00 };
  printf("%s\n", ca);
  printf("%x\n", *(unsigned char *)ca);
  printf("%x\n", *(short int *)ca);
  printf("%x\n", *(int *)ca);
  printf("%016lx\n", *(long int *)ca);

  return 0;
}
