#include <stdio.h>
#include <malloc.h>
struct weapon {
  int price;
  int atk;
  struct weapon *next;
};//结构体

struct weapon *create() {
  struct weapon *head;
  struct weapon *p1, *p2;
  int n = 0;
  p1 = p2 = (struct weapon *) malloc(sizeof(struct weapon));
  scanf("%d,%d", &p1->price, &p1->atk);
  head = nullptr;
  while (p1->price != 0) {
    n++;
    if (n == 1) {
      head = p1;
    } else {
      p2->next = p1;
    }

    p2 = p1;
    p1 = (struct weapon *) malloc(sizeof(struct weapon));
    scanf("%d,%d", &p1->price, &p1->atk);
  }
  p2->next = nullptr;
  free(p1);
  return head;
}

//创建链表
struct weapon *create_list() {
  struct weapon *p;
  p = create();
  printf("%d,%d", p->price, p->atk);
  return p;
}

//释放链表申请的内存
int free_list(struct weapon *head) {

  if (head == nullptr) {
    std::cout << "无效的链表头";
    return 0;
  }

  if (head->next == nullptr) {    //此处用上了创建链表时最后一个item的next设置为nullptr
    free(head);
  } else {
    free_list(head->next);
  }
  return 0;
}

int main() {
  free_list(create_list());
}
