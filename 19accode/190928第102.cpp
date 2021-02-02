#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char name[30];
	double score;
}A;
FILE *create(void);
void show(FILE *p)
{
	fseek(p,0L,0);
	A b;
	while(fread(&b,sizeof(A),1,p)==1)
		printf("name:%s,score:%lf\n",b.name,b.score);
}
FILE *create(void);
int length(FILE *p)
{
	return 0;

}
int main(void)
{
	FILE *p=create();
	show(p);
	fclose(p);
	return 0;
}
FILE *create(void)
{
	FILE *p=fopen("E:/85.abc","wb+");
	if(p=NULL)
	{
		printf("fail\n");
		exit(-1);
	}
	int n;
	A b;
	printf("please input");
	scanf("%d",&n);
	for(int i=0;i<n;++i)
	{
		printf("%d\n",i+1);
		scanf("the %s th%lf",b.name,&b.score);
		fwrite(&b,sizeof(A),1,p);
	}
	return p;
}
