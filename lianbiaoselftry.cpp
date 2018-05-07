#include <iostream>
#include <stdio.h>
#include "malloc.h"
using namespace std;
struct weapon
{
	int price;
	int atk;
	struct weapon * next;
};

int free_list(struct weapon * ppp);

int show_all(struct weapon *pp)
{
	while (pp != nullptr)
	{
		cout << pp->price << " " << pp->atk << endl;
		pp = pp -> next;
	}
}
	


struct weapon *create()
{
	struct weapon *p1, *p2, *head;
	head = nullptr;
	p1 = p2 = (struct weapon *) malloc (sizeof (struct weapon)); 
	int n = 0;
	scanf("%d,%d",&p1->price, &p1->atk);
	while (p1->price != 0)
	{
		n++;
	        if (n == 1)
			head = p1;
		else 
			p2 -> next = p1;
		p2 = p1;
		p1 = (struct weapon *) malloc (sizeof(struct weapon));
	        scanf("%d,%d",&p1->price, &p1->atk);
	}
	p2 -> next = nullptr;
	show_all(head);
	free(p1);
	return head;
}
//
//struct weapon *create_list()
//{
//	struct weapon *p;
//	p = create();
//	cout << p->price << " " << p->atk << endl; 
//	return p;
//}




int free_list(struct weapon * head)
{

	if (head == nullptr)
	{	cout << "无效";
	return 0;
	}
	if(head-> next== nullptr)
	free(head);
	else
       free_list(head -> next);

}

int main()
{
	struct weapon *p;
	p = create();
	cout << p->price << " " << p->atk << endl;
	free_list(p);
	return 0;
}
