#include<stdio.h>
#include<stdlib.h>

typedef struct Lnode {
	int data;
	struct Lnode* next;
}Lnode, * LinkList;

void CreatLinkList(LinkList& L);