#include<stdio.h>
int *p;
void g(void);
void g(void);
void f(void)
{
	int i=10;
	static int j;
	printf("%d,%d\n",i++,j++);
	p=&j;
}
int main(void)
{
//	printf("%d\n",j); error j的定义在f函数内
	f();
	f();
	f();
	printf("%d\n",*p);//引入指针
	return 0;
}