#include"head.h"
/*
�㷨˼�룺��ΪA��B�Ľ���A�бض���������ֻ��ɾ��A�н��������Ԫ�ء�
*/
int main(void) {
	//����������
	Lnode* A = (Linklist)malloc(sizeof(Lnode));
	Lnode* p = A;
	int num[] = {-3,-2,1,4,5,6,7,12 };
	int len = sizeof(num) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Lnode* r = (Linklist)malloc(sizeof(Lnode));
		r->data = num[i];
		p->next = r;
		p = r;
	}
	p->next = NULL;
	Lnode* B = (Linklist)malloc(sizeof(Lnode));
	p= B;
	int num2[] = { -2,3,5,8,12 };
	len = sizeof(num2) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Lnode* r = (Linklist)malloc(sizeof(Lnode));
		r->data = num2[i];
		p->next = r;
		p = r;
	}
	p->next = NULL;
	Findsame(A, B);
	p = A->next;
	while (p)
	{
		printf("%d ", p->data);
		p = p->next;
	}
	return 0;
}