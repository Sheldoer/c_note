#include"title.h"
int main(void)
{
	LinkList L,p,q;
	int i=0;

	CreatLinkList(L);
	p = L;
	while (p && i < 5)
	{
		p = p->next;
		printf("%d", p->data);
		i++;
	}
	
	while (p)
	{
		q = p->next;
		free(p);
	}
	L = NULL;

	return 0;
}
void CreatLinkList(LinkList& L)
{
	int len;
	L = (LinkList)malloc(sizeof(Lnode));
	L->next = L;
	Lnode* p;
	puts("Please input the list length:");
	scanf_s("%d", &len);
	for (int i = 0; i < len; i++) {
		p= (Lnode*)malloc(sizeof(Lnode));
		p->data = i;
		p->next = L->next;
		L->next=p;
	}
}