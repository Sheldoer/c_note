#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a[10];
	FILE *fp=fopen("E://12.txt","r");
	if(fp==NULL)
	{
		printf("���ļ�ʧ�ܣ������˳�\n");
		exit(-1);
	}
	while(fgets(a,10,stdin)!=NULL)
		fputs(a,stdout);
	fclose(fp);
	fp=NULL;
	return 0;
}