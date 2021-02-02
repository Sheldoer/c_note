#include <stdio.h>
int f(int b)
{
	int d=1;
//	b+=d;
	printf("%d%d%d\n",b,d,5);
	return b;

}
int b=5;
int main(void)
{
	int a,e,d=3;
	e=f(scanf("%d",&a));
	printf("%d\nf(3)result:%d\n",d,e);

	return 0;
}
