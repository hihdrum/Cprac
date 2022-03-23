#include <stdio.h>

int fact_rec(const int x)
{
  if(0 == x)
  {
    return 1;
  }
  else
  {
    return x * fact_rec(x - 1);
  }
}

void print_nest_indent(int x)
{
  int i;
  for(i = 0; i < x; i++)
  {
    putchar(' ');
  }
}

int fact_rec_dbg(const int x)
{
  static int nest = 0;

  print_nest_indent(nest++);
  printf("CALL : %s(%d)\n", __func__, x);

  int result;
  if(0 == x)
  {
    result = 1;
  }
  else
  {
    print_nest_indent(nest);
    printf("PROC : %d * %s(%d)\n", x, __func__, x - 1);

    result = x * fact_rec_dbg(x - 1);

    print_nest_indent(nest);
    printf("PROC : %d * %s(%d) = %d\n", x, __func__, x - 1, result);
  }

  print_nest_indent(--nest);
  printf("RET  : %s(%d)= %d\n", __func__, x, result);

  return result;
}

int main(void)
{
  int x = 5;
  printf("fact(%d) = %d\n", x, fact_rec(x));

  printf("fact(%d) = %d\n", x, fact_rec_dbg(x));

  return 0;
}
