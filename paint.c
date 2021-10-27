#include <stdio.h>

void printChar(char c, int x)
{
  int i;
  for(i = 0; i < x; i++)
  {
    putchar(c);
  } 
}

void printAster(int x)
{
  printChar('*', x);
}

void printSpace(int x)
{
  printChar(' ', x);
}

void printNitouhen(int height)
{
  for(int i = 0; i < height; i++)
  {
    int space = height - (i + 1);
    int aster = (i * 2) + 1;

    printSpace(space);
    printAster(aster);
    putchar('\n');

  }
}

void printHeikou(int width, int height)
{
  for(int i = 0; i < height; i++)
  {
    printSpace(i);
    printAster(width);
    putchar('\n');
  }
}

void parall(int width, int height)
{
  int i;
  int j;
  for(i = 0; i < height; i++)
  {
    for(j = 0; j < width; j++)
    {
      putchar('*');
    }
    putchar('\n');
  }
}

int main(void)
{
  printf("二等辺三角形\n");
  printNitouhen(3);
  putchar('\n');

  printf("平行四辺形\n");
  printHeikou(5, 3);

  printf("四角形\n");
  parall(4, 2);

  return 0;
}
