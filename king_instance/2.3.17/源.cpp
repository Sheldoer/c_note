#include "head.h"
/*
�㷨˼�룺��Ϊ��ѭ��˫���������ͨ��ͷ�ڵ��ҵ���ʼ�ڵ���ĩβ�ڵ㣬
���˫������ͷͬʱ�������鿴Ԫ���Ƿ�Գƣ����Գ��򷵻�false���������δ��ʾ�������ǶԳƵġ�
*/
int main(void) {
	Dnode* L = (Dlinklist)malloc(sizeof(Dnode));
	Dnode* p = L;
	int num[] = { 1,2,2,1};
	int len = sizeof(num) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Dnode* r = (Dlinklist)malloc(sizeof(Dnode));
		r->data = num[i];
		p->next = r;
		r->prior = p;
		p = r;
	}
	p->next = L->next;
	p->next->prior = p;
	printf("%3s ", Judgement(L) ? "yes" : "no");
	return 0;
}