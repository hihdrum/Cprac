#include <stdio.h>

int main(void)
{
  /* 符号有り */
  char ch = 'A';
  printf("ch = %c\n", ch);

  short int si = 1024;
  printf("si = %d\n", si);

  int i = 0xffeeddcc;
  printf("i = %d\n", i);

  long int li = 123;
  printf("li = %ld\n", li);

  /* 符号無し */
  unsigned char uch = '@';
  printf("uch = %uc\n", uch);

  unsigned int ui = 0xffeeddcc;
  printf("ui = %ud\n", ui);

  /* 実数 */
  float f = 1.2;
  printf("f = %f\n", f);

  double d = 1.4142e2;
  printf("d = %g\n", d);

  /* 配列 */
  int ia[] = { 1, 2};
  printf("ia[%d] = %d, ia[%d] = %d\n", 0, ia[0], 1, ia[1]);

  return 0;

}
