#include <stdio.h>

/* seibetsu: 0:男性, 1:女性 */
int calcFee(int seibetsu, int nenrei)
{
  if(0 == seibetsu && 6 <= nenrei)
  {
      return 1000;
  }
  else if(1 == seibetsu && 6 <= nenrei)
  {
    return 800;
  }

  return 200;
}

int main(void)
{
  int seibetsu;
  int nenrei = 7;

  seibetsu = 0;
  printf("seibetsu:%d, nenrei:%d => %d円\n", seibetsu, nenrei, calcFee(seibetsu, nenrei));

  nenrei = 6;
  printf("seibetsu:%d, nenrei:%d => %d円\n", seibetsu, nenrei, calcFee(seibetsu, nenrei));

  seibetsu = 1;


  return 0;
}
