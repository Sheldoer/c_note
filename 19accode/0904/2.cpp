#include<stdio.h>//����printf����
static void g(void)
{
	printf("g����\n");
}
void (*P)(void)=g;//���ָ�벢δ����
//char *P;
//*P=g;
extern void f(void)//extern �ⲿ����
{
	printf("hahaha\n");
}