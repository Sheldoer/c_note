#include"head.h"
/*
�㷨˼�룺���ö��ж�ÿһ����б���������ÿһ��Ľڵ����������ֵ�洢��������󷵻����ֵ��
*/
int main(void) {
	//����������
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i + 1;
	BiTree T;
	Creattree(T, num, 0, Max);
	printf("%d ", Breath(T));
	return 0;
}