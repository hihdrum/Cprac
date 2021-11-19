#include <stdio.h>

void print_bit(unsigned char x)
{
  int i;
  for(i = 0; i < 8; i++)
  {
    printf("%d", 1 & (x >> (7-i)));
  }
}

void print_bit_addr(unsigned char *x)
{
  print_bit(x[0]);
  putchar('.');
  print_bit(x[1]);
  putchar('.');
  print_bit(x[2]);
  putchar('.');
  print_bit(x[3]);
}

void op_one(
    unsigned char *x,
    unsigned char *out,
    unsigned char (*operator)(unsigned char))
{
  int i;
  for(i = 0; i < 4; i++)
  {
    out[i] = operator(x[i]);
  }
}

void op(
    unsigned char *x,
    unsigned char *y,
    unsigned char *out,
    unsigned char (*operator)(unsigned char, unsigned char))
{
  int i;
  for(i = 0; i < 4; i++)
  {
    out[i] = operator(x[i], y[i]);
  }
}

unsigned char lognot(unsigned char x)
{
  return ~x;
}

unsigned char logand(unsigned char x, unsigned char y)
{
  return x & y;
}

unsigned char logor(unsigned char x, unsigned char y)
{
  return x | y;
}

int main(void)
{
  unsigned char ip[4]   = { 192, 168, 1, 2};
  unsigned char mask[4] = { 255, 255, 252, 0};

  unsigned char network[4] = {0};
  unsigned char broad[4] = {0};
  unsigned char mask_not[4] = {0};
  unsigned char ans[4] = {0};

  int i;

  //op(ip, mask, logand, network);
  op(ip, mask, network, logand);

  printf("%d.%d.%d.%d\n", network[0], network[1], network[2], network[3]); 
  print_bit_addr(network);
  putchar('\n');

  op_one(mask, mask_not, lognot);

  printf("%d.%d.%d.%d\n", mask_not[0], mask_not[1], mask_not[2], mask_not[3]); 
  op(network, mask_not, broad, logor);

  printf("%d.%d.%d.%d\n", broad[0], broad[1], broad[2], broad[3]); 

  /* 答え */
  for(i = 0; i < 4; i++)
  {
    ans[i] = (ip[i] & mask[i]) | ~ mask[i];
  }

  printf("-----------------------\n");
  print_bit_addr(ip);
  putchar('\n');
  print_bit_addr(mask);
  putchar('\n');
  print_bit_addr(mask_not);
  putchar('\n');
  print_bit_addr(network);
  putchar('\n');
  print_bit_addr(broad);
  putchar('\n');
  print_bit_addr(ans);
  putchar('\n');

  return 0;
}

