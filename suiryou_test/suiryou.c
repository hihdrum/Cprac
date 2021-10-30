#include "suiryou.h"

#define DEF_WAR      (95)
#define DEF_WAR_DOWN (90)

/* 問題2.1 */
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

/* warning_v3まで作成後以下の様にするのがよいのではないかと思った。*/
int warning_normal(int x)
{
  return warning(x);
}

int warning_warning(int x)
{
  if(DEF_WAR_DOWN > x)
  {
    return 0;
  }

  return 1;
}

int warning_v4(int x)
{
  static int state = 0;
  if(0 == state)
  {
    state = warning_normal(x);
  }
  else
  {
    state = warning_warning(x);
  }

  return state;
}

