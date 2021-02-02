#include <stdio.h>
#define M 5
#define N 6
bool f(int (*a)[N],int i,int j)
{
	for(int x=0;x<M;++x)
	{
		if(a[x][j]<a[i][j])
			return false;
	}
	return true;
}
void show(int a[M][N])
{
	for(int i=0;i<M;++i)
	{
		for(int j=0;j<N;j++)
		{
			printf("%5d",a[i][j]);
		}
		putchar('\n');
	}
}
int main(void)
{
	int a[M][N];
	for(int i=0;i<M*N;++i)
		a[i/N][i%N]=i;
	show(a);

	for(i=0;i<M;++i)
	{
		int k=0;
		for(int j=1;j<N;++j)
		{
			if(a[i][k]<a[i][j])
				k=j;
		}
	if(f(a,i,k))
		printf("a[%d][%d]是这个二维数组的鞍点\n",i,k);
	}
	
	return 0;
}
