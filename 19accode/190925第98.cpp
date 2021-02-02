#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *p=fopen("E:\\98.txt","rb");
	if(p==NULL)
	{
		printf("");
		exit(-1);
	}
	char ch;
	while((ch=fgetc(p))!=EOF)
		printf("%d\n",ch);
	fclose(p);
	return 0;
}