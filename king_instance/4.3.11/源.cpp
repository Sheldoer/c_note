#include "head.h"
/*
�㷨˼��:������������ݹ����ÿһ���ڵ㣬�ҵ�ֵΪx�Ľڵ����ɾ������������ɾ�������Ǹ��ݺ��������xΪ�������������ɾ����
*/
int main(void) {
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i+1;
	BiTree T;
	Creattree(T, num, 0, Max);
	Preorder(T);
	printf("\n");
	PreX(T, 3);
	Preorder(T);
	return 0;
}