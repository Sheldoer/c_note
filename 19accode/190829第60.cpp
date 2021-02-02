#include<stdio.h>
#define N 10
void show(int a[N][N])
{
	for(int i=0;i<N;++i)
	{
		for(int j=0;j<i;++j)
			printf("%6d",a[i][j]);
		putchar('\n');
	}
}
int main(void)
{
	int a[N][N]={0};
	for(int i=0;i<N;++i)
		a[i][0]=1;
	for(i=1;i<N;++i)
		for(int j=1;j<=i;++j)
			a[i][j]=a[i-1][j-1]+a[i-1][j];
	show(a);
	return 0;
}