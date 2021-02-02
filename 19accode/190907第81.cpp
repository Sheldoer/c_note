#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int*p=(int *)malloc(sizeof(int)*2);
	if(p==NULL)
	{
		printf("内存分配失败，程序退出\n");
		exit(-1);
	}
	p[0]=1;
	p[1]=2;
	
	if(realloc(p,sizeof(int)*4)==NULL)//扩充内存
	{
		printf("内存分配失败，程序退出\n");
		exit(-1);
	}
	p[2]=3;
	//p[3]=4;
	printf("%d,%d,%d,%d\n",p[0],p[1],p[2],p[3]);
	double*p1=(double*)p;
	p1[0]=3.13;
	p1[1]=24.432;
	printf("%1f,%2f\n",p1[0],p1[1]);
	return 0;
}
