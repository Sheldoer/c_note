#include"head.h"
int main(void) {
	int num[Max];
	for (int i = 0; i < Max; i++)
		num[i] = i + 1;
	
	
	BiTree T;
	Creattree(T, num, 0, Max);
	BiTree F;
	F= (BiTree)malloc(sizeof(BtNode));
	F->data = 0;
	F->rchild = NULL;
	F->lchild=T ;

	int n = 0;
	FindArc(F, n);
	printf("%d", n);
	return 0;
}