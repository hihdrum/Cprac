#include <stdio.h>
#include <stdlib.h>

struct list
{
  struct list *next;
  int v;
};

struct list *g_head = NULL;

struct list *list_create(int x)
{
  struct list *list = malloc(sizeof(struct list));
  if(NULL == list)
  {
    exit(1);
  }

  list->v = x;
  return list;
}

struct list *list_add(int x)
{
  if(NULL == g_head)
  {
    g_head = list_create(x);
    return g_head;
  }

  struct list* list = g_head;

  while(list->next != NULL)
  {
    list = list->next;
  }

  list->next = list_create(x);
  return g_head;
}

void list_print(void)
{
  struct list *list = g_head;
  if(NULL != list)
  {
    printf("%d", list->v);

    while(list->next != NULL)
    {
      list = list->next;
      printf(" %d", list->v);
    }
  }
}

int main(void)
{
  list_add(1);
  list_add(2);
  list_add(3);
  list_add(4);
  list_add(5);

  list_print();
  putchar('\n');

  return 0;
}
