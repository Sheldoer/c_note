#include"head.h"
/*
�㷨˼�룺���÷ǵݹ�Ĳ�α�������ÿһ���Ҷ�ӽڵ���м�Ȩ��ͣ�
*/
int main(void) {
	//����������
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i + 1;
	BiTree T;
	Creattree(T, num, 0, Max);

	printf("%d ", wpl(T));
	return 0;
}