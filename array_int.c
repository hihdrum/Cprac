#include <stdio.h>

int main(void)
{
  int score[3] = { 10, 19, 17 };

  printf("score[%d] = %d\n", 0, score[0]);
  printf("score[%d] = %d\n", 1, score[1]);
  printf("score[%d] = %d\n", 2, score[2]);

  printf("sizeof(score) = %zd\n", sizeof(score));

  return 0;
}
