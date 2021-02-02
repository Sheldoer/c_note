#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char name[50]="E:\\古诗.txt";
	FILE *fp=fopen(name,"r");
	if(fp ==NULL)
	{
		printf("文件打开失败，程序退出\n");
		exit(-1);
	}
	FILE *fp2=fopen("E:/古诗2.txt","w");
	if(fp2 ==NULL)
	{
		printf("文件打开失败，程序退出\n");
		exit(-1);
	}
	char ch;
	while((ch=fgetc(fp))!=EOF)
		fputc(ch,fp2);
	fclose(fp);
	fclose(fp2);
	return 0;
}