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

void list_free(struct list *entry)
{
  free(entry);
}

void list_add(struct list *head, struct list *entry)
{
  struct list *list = head;

  while(list->next)
  {
    list = list->next;
  }

  list->next = entry;
  return;
}

void list_del(struct list *head, struct list *entry)
{
  struct list *list = head;
  struct list *prev = head;

  while(list)
  {
    if(list == entry)
    {
      prev->next = list->next;
      list_free(list);
    }

    prev = list;
    list = list->next;
  }
}

void list_print(const struct list *head)
{
  while(head)
  {
    printf("%d ", head->v);
    head = head->next;
  }
}

int main(void)
{
  g_head = list_create(0);

  struct list *entry;
  entry = list_create(1);
  list_add(g_head, entry);

  struct list *ent = list_create(2);
  list_add(g_head, ent);

  entry = list_create(3);
  list_add(g_head, entry);

  list_print(g_head);
  putchar('\n');

  list_del(g_head, ent);
  list_print(g_head);
  putchar('\n');

  return 0;
}
