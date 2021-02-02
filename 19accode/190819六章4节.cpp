#include<stdio.h>
#define LEN 10
int length(int *a)
{
	int j=0;
	while(j<LEN)
	{
		if(a[j]==0)
			break;
		else
			++j;
	}
	return j;
}
void show(int a[])
{
	int len=length(a);
	for(int i=0;i<len;++i)
		printf("%5d",a[i]);
	putchar('\n');
}
bool del(int *a,int index)        //删除
{
	int len=length(a);
	if(len==0||index>len-1)
		return false;
	else
	{
		for(int i=index+1;i<len;++i)
			a[i-1]=a[i];
		a[len-1]=0;
		return true;
	}
}
bool insert(int*a,int index,int value)   //插入
{
	int len=length(a);
	if(len==LEN||index<0||index>len)
		return false;
	else
	{
		for(int i=len-1;i>=index;--i)
			a[i+1]=a[i];
		a[index]=value;
		return true;
	}
}
void invert(int*a)       //调转
{
	int len=length(a);
	int from=0;
	int end=len-1;
	while(from<end)
	{
		int d=a[from];
		a[from]=a[end];
		a[end]=d;
		from++;
		end--;
	}
}
int find1(int*a,int value)   //查找
{
	int len=length(a);
	for(int i=0;i<len;++i)
	{
		if(a[i]==value)
			return i;
	}
	return -1;
}
int find2(int*a,int value)   //折半查找
{

	int len=length(a);
	int from=0;
	int end=len-1;
	while(from<end)
	{
		if(value==a[(from+end)/2])
			return (from+end)/2;
		else if(value>a[(from+end)/2])
			from=(from+end)/2+1;
		else
			end=(from+end)/2-1;
	}
}
int main(void)
{
	int a[LEN]={3,6,9,12,15,34,432};
//	del(a,3);
//	printf("%d\n",find1(a,12));
//	invert(a);
//	insert(a,3,8);
	printf("%d\n",find2(a,34));
	show(a);
	printf("有效元素的个数:%d\n",length(a));
/*void f1(int b)
{
	b=10;
}
void f2(int *c)
{
	*c=10;
}
int main(void)
{
	

	/*int *p;           //指针
	int a=2;
	p=&a;
	*p=3;
	f1(a);
	f2(&a);
	printf("%d\n",a);

	int d[3];
	p=d;
	p[0]=1;
	p[1]=3;
	p[2]=4;
	*p=10;
	*(p+1)=20;
	*(p+2)=30;
	0[p]=100;
	1[p]=200;
	2[p]=300;
	printf("%p,%o,%x\n",p,p+1,p+2);       //数组指针
	for(int i=0;i<3;++i)
		printf("%5d",d[i]);
	putchar('\n');
	*/
	return 0;
}