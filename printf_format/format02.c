#include <stdio.h>

/* 変換指示子%dにfloat型の変数を渡す。*/
/* 実行結果が不定になる。*/
static char *fmt = "%f\n";
static float x = (float)0xaaaaaaaa;

int main(void)
{
  printf(fmt, x);

  return 0;
}
