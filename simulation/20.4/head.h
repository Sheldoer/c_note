#include<stdio.h>
#include<stdlib.h>
#define Max 7
//�������ṹ��
typedef struct BtNode {
	int data;
	int size;
	struct BtNode* lchild, * rchild;
}BtNode, * BiTree;
//����������
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
bool JudgeTree(BiTree T, int n) {
	if (T) {
		if (T->data == n++ || JudgeTree(T->lchild, n) || JudgeTree(T->rchild, n))
			return true;
	}
	return false;
}


