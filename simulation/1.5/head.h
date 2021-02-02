#include<stdio.h>
#include<stdlib.h>
#define Max 7
typedef struct BtNode {
	int data;
	int size;
	struct BtNode* lchild, * rchild;
}BtNode, * BiTree;
void Creattree(BiTree& T, int A[], int n, int len) {
	if (n >= len)
		T = NULL;
	else {
		T = (BiTree)malloc(sizeof(BtNode));
		T->data = A[n];
		Creattree(T->lchild, A, 2 * n + 1, len);
		Creattree(T->rchild, A, 2 * n + 2, len);
	}
}
void Post(BiTree T, int& i, int& j, BtNode* p, BiTree& q) {
	if (!T || j == 1)
		return;
	Post(T->lchild, i, j, p, q);
	if (i == 1) {
		q = T;
		j = 1;
		i = 0;
	}
	if (T == p)
		i = 1;
	Post(T->rchild, i, j, p, q);
}