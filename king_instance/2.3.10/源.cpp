#include"head.h"
/*
�㷨˼�룺������������A���в�֣�����ÿ����Ԫ�أ�����λ������ż��λβ�嵽�������ϣ����ֻ�Ϊ����Ŀ�굥����
*/
int main(void) {
	Lnode* A = (Linklist)malloc(sizeof(Lnode));
	Lnode* p = A;
	int num[] = { 1,-3,4,-8,6,7 };
	int len = sizeof(num) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Lnode* r = (Linklist)malloc(sizeof(Lnode));
		r->data = num[i];
		p->next = r;
		p = r;
	}
	p->next = NULL;
	Lnode* B = Seperate(A);
	Lnode* q = B->next;
	p = A->next;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	printf("\n");
	while (q) {
		printf("%d ", q->data);
		q = q->next;
	}

	return 0;
}