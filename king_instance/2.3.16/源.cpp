#include"head.h"
/*
�㷨˼�룺���α��������������Ԫ����ͬ����ͬʱ��������������ͬ����A����������B�ط����������бȽϣ�
ֱ��A��B����һ��Ϊ�գ����B�������ˣ�˵��BΪA�������У�
*/
int main(void) {
	//����������
	Lnode* A = (Linklist)malloc(sizeof(Lnode));
	Lnode* p = A;
	int num[] = { 5,1,-3,4,-8,6,7,-2 };
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
	p = B;
	int num2[] = { 1,-3,4,-8,6,3};
	len = sizeof(num2) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Lnode* r = (Linklist)malloc(sizeof(Lnode));
		r->data = num2[i];
		p->next = r;
		p = r;
	}
	p->next = NULL;
	printf("%5s ", Judgement(A, B) ? "yes" : "no");
	return 0;
}