#include<stdio.h>
#include<stdlib.h>
void f(void)
{
	int *p=(int *)malloc(sizeof(int)*10);
	if(p==NULL)
	{
		printf("内存分配失败,程序退出\n");
		exit(-1);
	}
	free(p);
	p=NULL;
	free(p);
}
void g(void)
{
	int *p=(int*)realloc(NULL,sizeof(int)*4);
	if(p==NULL)
	{
		printf("内存分配失败,程序退出\n");
		exit(-1);
	}
	for(int i=0;i<4;++i)
		p[i]=i;
	printf("地址为%p\n",p);
	printf("地址为%p\n",p=(int*)realloc(p,1000));
	for(i=0;i<4;++i)
		printf("%d\n",p[i]);
	printf("%d\n",realloc(p,0));   //等价于free(p);

	//printf("地址为%p\n",realloc(p,1000));
}
int main(void)
{
	f();
	g();

	/*int n;
	printf("请输入学生数");
	scanf("%d",&n);
	char * a =(char *)malloc(65*n);
	if(a==NULL)
	{
		printf("内存分配失败,程序退出\n");
		exit(-1);
	}
	for(int i=0;i<n;++i)
	{
		printf("请输入第%d个学生的姓名，年龄和成绩：\n",i+1);
		scanf("%s%d%1f",a+65*i,(int *)(a+50+65*i),(double *)(a+54+65*i));
	}
	for(i=0;i<n;++i)
	{
		printf("第%d个学生的姓名:%s年龄:%d成绩:%1f\n",i+1,a+65*i,*(int *)(a+50+65*i),*(double *)(a+54+65*i));
	}
	free(a);
	*/
	return 0;
}