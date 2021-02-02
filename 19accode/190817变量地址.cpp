#include<stdio.h>
int main(void)
{

	/*int a[5]={89,34,-56,1,23};
	for(int k=4; k>1; --k)
	{
		for(int i=0; i<k ;++i)         //冒泡排序
		{
			if(a[i]>a[i+1])
			{
				int b=a[i];
				a[i]=a[i+1];
				a[i+1]=b;
			}
		}
	}
*/
	int a[7]={89,34,-56,1,22,33,23};
	for(int k=7;k>1;--k)
	{
		int c=0;
		for(int i=1;i<k;++i)
		{
			if(a[c]<a[i])
				c=i;
		}
		int b=a[c];
		a[c]=a[i-1];
		a[i-1]=b;
	}
	
	for(int j=0;j<7;++j)
		printf("%d,",a[j]);
	putchar('\n');


	/* //int a[2*2];
  //int b=2;
     //int c[2*b];  error
	
	const int b=2;
	int c[2*b];
	//int e[3.1];               //引用数组
	int e[(int)3.1];
	int f['A'];
	int g[true];
	int a[4]={1,2,3,4};
	//int a[]={1,2,3,4};
	//int a[4]={1};
	for(int i=0;i<4;++i)
		printf("%d\n",a[i]);
	*/



/*int a,b,c;
	printf("%p,%p,%p\n",&a,&b,&c);

	int d[1000];
	d[0]=1,d[1]=2,d[2]=3;
	printf("%d,%d,%d\n",d[0],d[1],d[2]);     //变量地址
	printf("%p,%p,%p\n",&d[0],&d[1],&d[2]);
	*/
	return 0;
}