#include<stdio.h>//包含printf函数
static void g(void)
{
	printf("g函数\n");
}
void (*P)(void)=g;//这个指针并未掌握
//char *P;
//*P=g;
extern void f(void)//extern 外部函数
{
	printf("hahaha\n");
}