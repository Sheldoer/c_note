#include<stdio.h>
#include<stdlib.h>
typedef struct Lnode {
	int data;
	struct Lnode* next;
}Lnode, * Linklist;
void changelist(Linklist& l) {
	Lnode* p = l;
	while (p->next->next)
		p = p->next;
	Lnode* q = l;
	Lnode* r = p->next;
	while (q != p) {
		q = q->next;
		if (q->data < r->data)
			r = q;
	}
	if (r != p->next) {
		r->data = p->next->data;
		q = p->next;
		p->next = q->next;
		free(q);
	}
}