#include <stdio.h>

void print_bit(unsigned char x)
{
  printf("%d", 1 & (x >> 7));
  printf("%d", 1 & (x >> 6));
  printf("%d", 1 & (x >> 5));
  printf("%d", 1 & (x >> 4));
  printf("%d", 1 & (x >> 3));
  printf("%d", 1 & (x >> 2));
  printf("%d", 1 & (x >> 1));
  printf("%d", 1 & (x >> 0));
}

void print_ipv4_addr(unsigned char *ip)
{
  print_bit(ip[0]);
  putchar('.');
  print_bit(ip[1]);
  putchar('.');
  print_bit(ip[2]);
  putchar('.');
  print_bit(ip[3]);
}

union ip4 {
  unsigned char oct[4];
  unsigned int i;
};

void ip4_print_oct(union ip4 x)
{
  print_ipv4_addr(x.oct);
}


int main(void)
{
  unsigned char ip[4] = { 192, 168, 10, 3 };
  unsigned char mask[4] = { 255, 255, 255, 192 };

  union ip4 v4Addr = {{ 192, 168, 10, 3}};
  union ip4 v4Mask = {{ 255, 255, 255, 192 }};

  print_ipv4_addr(ip);
  putchar('\n');
  print_ipv4_addr(v4Addr.oct);

  putchar('\n');
  print_ipv4_addr(mask);
  putchar('\n');
  print_ipv4_addr(v4Mask.oct);
  putchar('\n');

  union ip4 v4Broad = { .i = v4Addr.i | ~ v4Mask.i };
  ip4_print_oct(v4Broad);
  putchar('\n');

  return 0;
}
