#include<stdio.h>
#include<stdlib.h>
typedef struct Lnode {
	int data;
	struct Lnode* next;
}Lnode, * Linklist;
//ͷ�巨 �õݼ�����
Linklist Incorperate(Linklist& A, Linklist& B) {
	Lnode* p = A->next;
	Lnode* q = B->next;
	Linklist C = (Linklist)malloc(sizeof(Lnode));
	C->next=NULL;
	Lnode* r = NULL;
	while (p && q) {
		if (p->data > q->data)
		{
			r = q;
			q = q->next;
		}
		else
		{
			r = p;
			p = p->next;
		}
		r->next = C->next;
		C->next=r;
	}
	r = p ? p : q;
	while (r) {
		p = r;
		r = r->next;
		p->next = C->next; 
		C->next = p;
		
	}
	return C;
}
//β�巨 �õ�������
Linklist Incorperate2(Linklist& A, Linklist& B) {
	Lnode* p = A->next;
	Lnode* q = B->next;
	Linklist C = (Linklist)malloc(sizeof(Lnode));
	Lnode* r = C;
	while (p && q) {
		if (p->data > q->data)
		{
			r->next = q;
			q = q->next;
		}
		else
		{
			r->next = p;
			p = p->next;
		}
		r = r->next;
	}
	if (p)
		r->next = p;
	else
		r->next = q;
	return C;
}