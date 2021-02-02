#include<stdio.h>
#include<stdlib.h>     //malloc calloc free exit
#include<malloc.h>    //malloc calloc free
int main(void)
{
	int n;
	printf("请输入学生数:");
	scanf("%d",&n);
	int * p1=(int *)malloc(sizeof(int)*n);
	if(p1==NULL)
	{
		printf("内存分配失败,程序退出\n");
		exit(-1);
	}
	char (*p2)[50]=(char(*)[50])calloc(n,sizeof(char)*50);
	if(p2==NULL)
	{
		printf("内存分配失败,程序退出\n");
		exit(-1);
	}
	for(int i=0;i<n;++i)
	{
		printf("请输入第%d个学生的成绩和姓名：\n",i+1);
		scanf("%d%s",p1+i,p2[i]);
	}
	for(i=0;i<n;++i)
	{
		printf("第%d个学生的成绩为%d和姓名%s\n",i+1,p1[i],p2[i]);
	}
	free(p1);
	free(p2);
	return 0;
}