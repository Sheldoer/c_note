#include<stdio.h>
#include<stdlib.h>

//������ṹ��
typedef struct Lnode {
	int data;
	struct Lnode* next;
}Lnode, * Linklist;

//Ŀ�꺯��
bool Judgement(Linklist A, Linklist B) {
	Lnode* p = A->next;
	Lnode* q = B->next;
	while (p && q) {
		q = p->data == q->data ? q->next : B->next;
		p = p->next;
	}
	return q ? false : true;

}