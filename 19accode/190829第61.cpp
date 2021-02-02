#include<stdio.h>
#define N 10
void show(int a[])
{
	for(int i=0;i<N;++i)
		printf("%6d",a[i]);
	putchar('\n');
}
void move(int *a,int k,int index)
{
	for(int i=0;i<k;++i)
	{
		int d=a[index];
		a[index]=a[index-1];
		a[index-1]=d;
		index--;
	}

}
int main(void)
{
	int a[N];
	for(int i=0;i<N;++i)
		a[i]=i;
	show(a);
	int m;
	do
	{
		printf("请输入m的值：");
		scanf("%d",&m);
		if(m>=0&&m<=N)
			break;
		printf("输入的值有误");
	}while(1);
	for(i=N-m;i<N;++i)
		move(a,N-m,i);
	show(a);
	return 0;
}