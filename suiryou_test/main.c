#include <stdio.h>
#include "suiryou.h"

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

  printf("----------------------------------------\n");
  x = 90;
  printf("warning_v4(%d) = %d\n", x, warning_v4(x));

  x = 95;
  printf("warning_v4(%d) = %d\n", x, warning_v4(x));

  x = 94;
  printf("warning_v4(%d) = %d\n", x, warning_v4(x));

  x = 90;
  printf("warning_v4(%d) = %d\n", x, warning_v4(x));

  x = 89;
  printf("warning_v4(%d) = %d\n", x, warning_v4(x));


  return 0;
}
