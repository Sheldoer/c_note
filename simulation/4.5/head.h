#define Max 7
#include<stdio.h>
#include<stdlib.h>
//�������ṹ��
typedef struct BtNode {
	int data;
	int size;
	struct BtNode* lchild, * rchild;
}BtNode, * BiTree;
//����������
void Creattree(BiTree & T, int A[], int n, int len) {
	if (n >= len)
		T = NULL;
	else {
		T = (BiTree)malloc(sizeof(BtNode));
		T->data = A[n];
		Creattree(T->lchild, A, 2 * n + 1, len);
		Creattree(T->rchild, A, 2 * n + 2, len);
	}
}
//Ŀ�꺯��
void FindArc(BiTree T, int& n) {
	if (!T->lchild)
		return;
	BtNode* p = T->lchild;
	while (p) {
		printf("%d %d\n", T->data, p->data);
		n++;
		FindArc(p, n);
		p = p->rchild;
	}
}
void Preorder(BiTree T) {
	if (T != NULL)
	{
		printf("  %d", T->data);
		Preorder(T->lchild);
		Preorder(T->rchild);
	}
}