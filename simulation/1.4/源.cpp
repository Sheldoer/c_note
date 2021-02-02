#include"head.h"

int main(void) {
	Lnode* L = (Linklist)malloc(sizeof(Lnode));
	Lnode* p = L;
	int num[] = { 1,-3,4,-8,6,7,-2,-10};
	int len = sizeof(num) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Lnode* r = (Linklist)malloc(sizeof(Lnode));
		r->data = num[i];
		p->next = r;
		p = r;
	}
	p->next = NULL;
	changelist(L);
	p = L->next;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	return 0;
}