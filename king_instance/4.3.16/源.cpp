#include"head.h"
/*
�㷨˼�룺���÷ǵݹ��������������Ҷ�ӽڵ�β�嵽ͷ�ڵ�֮�󼴿ɡ�
*/
int main(void) {
	//����������
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i + 1;
	BiTree T;
	Creattree(T, num, 0, Max);
	BiTree L = (BiTree)malloc(sizeof(BtNode));
	Preorder(T, L);
	BiTree p = L->rchild;
	while (p) {
		printf("%d ", p->data);
		p=p->rchild;
	}
	return 0;
}