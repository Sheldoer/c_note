#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct LinkList
{
	int num;
	struct LinkList*next;
};
void delrepeatednode(LinkList*head)
{
	LinkList*p1=head->next;
	LinkList*p2=p1;
	while(p1)
	{
		while(p2->next)
		{
			if(p1->num==p2->next->num)
			{
				LinkList*t=p2->next;
				p2->next=t->next;
				free t;
			}
			else
			{
				p2=p2->next;
			}
		}
		p1=p1->next;
		p2=p1;
	}
}
int main(void)
{
	struct LinkList a,b,c,*head;
	a.num=1;
	b.num=2;
	c.num=3;
	head=&a;
	a.next=&b;
	b.next=&c;
	c.next=NULL;
	delrepeatednode(head);
	return 0;
}