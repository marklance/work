#include <stdio.h>
#include <malloc.h>
struct weapon {
  int price;
  int atk;
  struct weapon * next;
};



int main()
{
  struct weapon a,b,c, *head;
  a.price = 1;
  a.atk = 1;
  b.price = 2;
  b.atk = 2;
  c.price = 3;
  c.atk = 3;
  head = &a;
   a.next = &b;
   b.next = &c;
   c.next = NULL;
   struct weapon *p;
   p = head;
   while (p != NULL)
   {
  printf("%d,%d\n", p->price,p->atk);
  p = p->next;
   }
  return 0;
}
