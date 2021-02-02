#include<stdio.h>
void f(char a,char b)
{
	printf("从%c柱子向%c柱子移动一个圆盘\n",a,b);
}
void g(int i,char a,char b,char c)
{
	if(i==2)
	{
		f(a,b);
		f(a,c);
		f(b,c);
	}
	else if(i>2)
	{
		g(i-1,a,c,b);
		f(a,c);
		g(i-1,b,a,c);
	}
}
/*int f(int a)
{
	if(a==1||a==0)
		return 1;
	else if(a>1)
		return a*f(a-1);

}
*/
int main(void)
{
	g(4,'A','B','C');
	//printf("%d\n",f(5));
	return 0;
}