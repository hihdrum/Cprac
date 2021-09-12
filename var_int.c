#include <stdio.h>

int main(void)
{
  int weeknum = 7; /* 一週間の日数 */
  printf("weeknum = %d\n", weeknum);

  printf("sizeof(int) = %zd\n", sizeof(int));
  printf("sizeof(weeknum) = %zd\n", sizeof(weeknum));

  return 0;
}
