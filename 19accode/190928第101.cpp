#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *p=fopen("E:/98.txt","a+");
	if(p==NULL)
	{
		printf("\n");
		exit(0);
	}
	char ch;
	while((ch=getc(stdin))!=EOF)
		putc(ch,p);
	rewind(p);
	while((ch=getc(p))!=EOF)
		putc(ch,stdout);
	fclose(p);
	return 0;
}