#include <stdio.h>

#define DEF_WAR      (95)
#define DEF_WAR_DOWN (90)

int warning(int x)
{
  if(DEF_WAR <= x)
  {
    return 1;
  }

  return 0;
}

int warning_v2(int x, int oldWar)
{
  if(1 == oldWar)
  {
    /* 警告状態 */
    if(DEF_WAR_DOWN > x)
    {
      return 0;
    }

    return 1;
  }
  else
  {
    /* 通常状態 */
    return warning(x);
  }
}

int warning_v3(int x)
{
  int static state = 0;
  if(1 == state)
  {
    /* 警告状態 */
    if(DEF_WAR_DOWN > x)
    {
      state = 0;
      return 0;
    }

    return 1;
  }
  else
  {
    /* 通常状態 */
    state = warning(x);
    return state;
  }
}


int main(void)
{
  printf("----------------------------------------\n");
  int x = 90;
  printf("warning(%d) = %d\n", x, warning(x));

  x = 95;
  printf("warning(%d) = %d\n", x, warning(x));

  x = 96;
  printf("warning(%d) = %d\n", x, warning(x));

  printf("----------------------------------------\n");
  int warState_cur = 0;
  int warState_new;

  x = 90;
  warState_new = warning_v2(x, warState_cur);
  printf("warning(%d, %d) = %d\n", x, warState_cur, warState_new);
  warState_cur = warState_new;

  x = 95;
  warState_new = warning_v2(x, warState_cur);
  printf("warning(%d, %d) = %d\n", x, warState_cur, warState_new);
  warState_cur = warState_new;

  x = 94;
  warState_new = warning_v2(x, warState_cur);
  printf("warning(%d, %d) = %d\n", x, warState_cur, warState_new);
  warState_cur = warState_new;

  x = 90;
  warState_new = warning_v2(x, warState_cur);
  printf("warning(%d, %d) = %d\n", x, warState_cur, warState_new);
  warState_cur = warState_new;

  x = 89;
  warState_new = warning_v2(x, warState_cur);
  printf("warning(%d, %d) = %d\n", x, warState_cur, warState_new);
  warState_cur = warState_new;

  printf("----------------------------------------\n");
  x = 90;
  printf("warning_v3(%d) = %d\n", x, warning_v3(x));

  x = 95;
  printf("warning_v3(%d) = %d\n", x, warning_v3(x));

  x = 94;
  printf("warning_v3(%d) = %d\n", x, warning_v3(x));

  x = 90;
  printf("warning_v3(%d) = %d\n", x, warning_v3(x));

  x = 89;
  printf("warning_v3(%d) = %d\n", x, warning_v3(x));

  return 0;
}
