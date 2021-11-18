#include <stdio.h>

/* 何らかの構造を持つデータが定義されているものとする。*/
/*******************************************************/

/* data1 */
/**************************/
struct data1
{
  int x;
  int y;
};

/* data1出力用関数 */
void print_data1_01(struct data1 *d)
{
  printf("x = %d, y = %d\n", d->x, d->y);
}

void print_data1_02(struct data1 *d)
{
  printf("%d %d\n", d->x, d->y);
}

/* data2 */
/**************************/
struct data2
{
  char *header;
  double x;
  double y;
};

/* data2出力用関数 */
void print_data2_01(struct data2 *d)
{
  printf("header = %s, x = %f, y = %f\n", d->header, d->x, d->y);
}

void print_data2_02(struct data2 *d)
{
  printf("%s %f %f\n", d->header, d->x, d->y);
}

/* データ出力を一般化したい。*/
/**************************/
struct proc
{
  int num;
  void (*proc[10])(void *);
};

void proc(struct proc *p, void *d)
{
  void (**func)(void *) = p->proc;
  while(*func)
  {
    (*func)(d);
    func++;
  }
}

void add_proc(struct proc *p, void *proc)
{
  p->proc[p->num] = proc;
  p->num++;
}

struct proc d1proc;
struct proc d2proc;

int main(void)
{
  struct data1 d1 = { 1, 2 };
  add_proc(&d1proc, print_data1_01);
  add_proc(&d1proc, print_data1_02);
  proc(&d1proc, &d1);

  struct data2 d2 = { "DATA", 3.25, 5.5 };
  add_proc(&d2proc, print_data2_01);
  add_proc(&d2proc, print_data2_02);
  proc(&d2proc, &d2);

  return 0;
}
