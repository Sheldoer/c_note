#include<stdio.h>
extern int A;
/*int max(int a,int b)
{
	return a>b?a:b;
}
int min(int a,int b)
{
	return a>b?b:a;
}
/*void F(int a)
{
	printf("%d\n",a);
}
#define F(a) F(a);printf("haha\n")//函数重名

/*#define A 2
#define B(a,b) a*b

void f(void)
{
	printf("%d,%d\n",A,B(4,1));
}
#undef A
#undef B
*/
int main(void)
{

	printf("%d\n",A);

/*	auto int a=3;//自动变量,可以不加
	for(int i=0;i<10000;++i)
		;
	register int j=2;//寄存器变量
	/*int (*p)(int,int);
	p=max;
	printf("%d\n",(*p)(10,5));
	p=min;
	printf("%d\n",p(10,5));
//	F(3);
//	printf("%d,%d\n",A,B(4,1)); undef 函数*/
		return 0;
}
int A=10;