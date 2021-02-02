#include"head.h"
int main(void) {
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i + 1;
	BiTree T;
	Creattree(T, num, 0, Max);
	BtNode* p = T->rchild->lchild;
	BtNode* q = NULL;
	int i = 0, j = 0;
	Post(T, i, j, p, q);
	printf("%d\n", q->data);
	
	return 0;
}