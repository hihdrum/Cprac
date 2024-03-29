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

void print_data1_01_exp(void)
{
  printf("print_data1_01 : x = xの値, y = yの値\n");
}

void print_data1_02(struct data1 *d)
{
  printf("%d %d\n", d->x, d->y);
}

void print_data1_02_exp(void)
{
  printf("print_data1_02 : xの値 yの値\n");
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

void print_data2_01_exp(void)
{
  printf("print_data2_01 : header = ヘッダ, x = xの値, y = yの値\n");
}

void print_data2_02(struct data2 *d)
{
  printf("%s %f %f\n", d->header, d->x, d->y);
}

void print_data2_02_exp(void)
{
  printf("print_data2_02 :ヘッダ xの値 yの値\n");
}

/* データ出力を一般化したい。*/
/**************************/
struct proc
{
  void (*proc)(void *);
  void (*explain)(void);
};

struct data_processor
{
  int num;
  struct proc proc[10];
};

void proc(struct data_processor *p, void *d)
{
  for(struct proc *proc = p->proc; proc->proc; proc++)
  {
    if(proc->proc)
      (*(proc->proc))(d);
  }
}

/* TODO : 説明はNULLとなっている関数を許容したい。*/
void explain(struct data_processor *p)
{
  for(struct proc *proc = p->proc; proc->explain; proc++)
  {
    if(proc->explain)
      (*(proc->explain))();
  }
}

void add_proc(struct data_processor *p, void *proc, void *explain)
{
  p->proc[p->num].proc = proc;
  p->proc[p->num].explain = explain;
  p->num++;
}

struct data_processor d1proc;
struct data_processor d2proc;

int main(void)
{
  struct data1 d1 = { 1, 2 };
  add_proc(&d1proc, print_data1_01, print_data1_01_exp);
  add_proc(&d1proc, print_data1_02, print_data1_02_exp);
  proc(&d1proc, &d1);

  struct data2 d2 = { "DATA", 3.25, 5.5 };
  add_proc(&d2proc, print_data2_01, print_data2_01_exp);
  add_proc(&d2proc, print_data2_02, print_data2_02_exp);
  proc(&d2proc, &d2);

  explain(&d1proc);
  explain(&d2proc);

  return 0;
}
