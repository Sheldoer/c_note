#include"head.h"

int main(void) {
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i + 1;
	BiTree T;
	Creattree(T, num, 0, Max);
	T->data = 8;
	//T->lchild->data = 9;
	if (JudgeTree(T, 1)) {
		printf("yes\n");
	}
	return 0;
}