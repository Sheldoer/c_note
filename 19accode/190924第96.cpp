#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *p1=fopen("E:/96.txt","r");
	if(p1==NULL)
	{
		printf("");
		exit(-1);
	}
	FILE *p2=fopen("E:/96-1.txt","w");
	if(p2==NULL)
	{
		printf("");
		exit(-1);
	}
	int a;
	double b;
	char c[40];
	fscanf(p1,"%d%lf%s",&a,&b,c);
	printf("%d\n%1lf\n%s",a,b,c);
	fclose(p1);
	fclose(p2);
	p1=NULL;
	p2=NULL;
	return 0;
}