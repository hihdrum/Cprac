#include <stdio.h>

int calcNyuuenRyou(int nenrei)
{
  if(65 <= nenrei)
  {
    return 0;
  }
  else if(18 <= nenrei)
  {
    return 1800;
  }

  return 1200;
}

int main(void)
{
  int nenrei = 100;
  printf("%d歳 => %d円\n", nenrei, calcNyuuenRyou(nenrei));

  nenrei = 65;
  printf("%d歳 => %d円\n", nenrei, calcNyuuenRyou(nenrei));

  nenrei = 64;
  printf("%d歳 => %d円\n", nenrei, calcNyuuenRyou(nenrei));

  nenrei = 19;
  printf("%d歳 => %d円\n", nenrei, calcNyuuenRyou(nenrei));

  nenrei = 18;
  printf("%d歳 => %d円\n", nenrei, calcNyuuenRyou(nenrei));

  nenrei = 17;
  printf("%d歳 => %d円\n", nenrei, calcNyuuenRyou(nenrei));

  return 0;
}
