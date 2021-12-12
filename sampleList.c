#include <stdio.h>

struct list {
  int d;
  struct list *next;
};

void list_add(struct list *l1, struct list *l2)
{
  l1->next = l2;
}

int main(void)
{
  struct list l1 = { .d = 1 };
  struct list l2 = { .d = 2 };
  struct list l3 = { .d = 3 };
  
//  l1.next = &l2;
  list_add(&l1, &l2);
  list_add(&l2, &l3);

  printf("d = %d\n", l1.next->d);
  printf("d = %d\n", l1.next->next->d);

  return 0;
}
