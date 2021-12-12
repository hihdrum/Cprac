#include <stdio.h>
#include "point.h"

int main(void)
{
  struct point p1;
  p1.x = 1.0;
  p1.y = 2.0;
  printf("p1 : x = %f, y = %f\n", p1.x, p1.y);

  struct point p2 = { 1.1, 2.1 };
  printf("p2 : x = %f, y = %f\n", p2.x, p2.y);

  struct point p3 = { .x = 3.1, .y = 4.1 };
  printf("p3 : x = %f, y = %f\n", p3.x, p3.y);


  struct point *pp1 = &p1;
  printf("pp1 : x = %f, y = %f\n", (*pp1).x, (*pp1).y);
  printf("pp1 : x = %f, y = %f\n", pp1->x, pp1->y);

  printf("&p1   = %p\n", &p1);
  printf("&p1.x = %p\n", &p1.x);
  printf("&p1.y = %p\n", &p1.y);

  return 0;
   
}
