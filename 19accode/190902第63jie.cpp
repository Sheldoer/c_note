#include<stdio.h>
#define A 2
#define B A+A
#define C (A+A)
#define D(a,b) (a)*(b)
void f(void)
{
	printf("%d\n",A);
}
#define B(a,b) a-b
void g(void)
{
	printf("%d\n",B(5,2));//可以重名
}
int main(void)
{
	f();
	g();
//	printf("%d,%d,%d\n",A,B*B,C*C);
//	printf("%d\n",D(2,2+1));
	return 0;
}