#include "head.h"
/*
�㷨˼�룺����˫��������ص㣬Locate�����Ȳ���ֵΪx�Ľڵ㣬�Ըýڵ�����p���б�ǣ��ٽ���ǰ��������ӡ�
֮��Ѱ���ʵ��Ĳ���λ�ã���q���б�ǣ���ǵ�p�ڵ���뵽�ڵ�֮�󼴿ɡ�
*/
int main(void) {
	Dnode* L = (Dlinklist)malloc(sizeof(Dnode));
	Dnode* p = L;
	int num[] = { 1,2,3,4 };
	int len = sizeof(num) / sizeof(int);
	for (int i = 0; i < len; i++)
	{
		Dnode* r = (Dlinklist)malloc(sizeof(Dnode));
		r->data = num[i];
		r->freq = 0;
		p->next = r;
		r->prior = p;
		p = r;
	}
	p->next = NULL;
	p = Locate(L, 2);
	p = Locate(L, 3);
	p = Locate(L, 4);
	p = L->next;
	while (p) {
		printf("%d ", p->data);
		p = p->next;
	}
	return 0;
}