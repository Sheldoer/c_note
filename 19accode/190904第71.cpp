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
//	printf("%d\n",j); error j�Ķ�����f������
	f();
	f();
	f();
	printf("%d\n",*p);//����ָ��
	return 0;
}