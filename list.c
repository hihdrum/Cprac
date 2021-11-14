#include <stdio.h>
#include <stdlib.h>

struct list
{
  struct list *next;
  int v;
};

struct list head_dmy = { NULL, 0 };
struct list *g_head = &head_dmy;

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

void list_add(struct list *entry)
{
  struct list **list = &g_head;

  while((*list)->next != NULL)
  {
    list = &(*list)->next;
  }

  (*list)->next = entry;
  return;
}

void list_print(void)
{
  struct list *list = g_head->next;

  while(NULL != list)
  {
    printf("%d ", list->v);
    list = list->next;
  }
}

int main(void)
{
  struct list *entry;
  entry = list_create(1);
  list_add(entry);

  entry = list_create(2);
  list_add(entry);

  entry = list_create(3);
  list_add(entry);

  list_print();
  putchar('\n');

  return 0;
}
