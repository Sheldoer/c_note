#include<stdio.h>
#include<stdlib.h>

//������ṹ��
typedef struct Lnode {
	int data;
	struct Lnode* next;
}Lnode, * Linklist;

void Findsame(Linklist& A, Linklist& B) {
	Lnode* p = A->next;
	Lnode* q = B->next;
	Lnode* r = A;  //��Ǵ�ɾ���ڵ��ǰ���ڵ�
	while (p && q) {
		if (p->data > q->data)
			q = q->next;
		else if (p->data < q->data) {
			r->next = p->next;
			free(p);
			p = r->next;
		}
		else {
			r = r->next;
			p = p->next;
		}	
	}//while
	if (p)
		p->next = NULL;
}