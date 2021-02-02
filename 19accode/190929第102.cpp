#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE*p=fopen("E:/98.txt","r");
	if(p==NULL)
	{
		printf("fail\n");
		exit(0);
	}
	if(!feof(p))
		printf("none\n");
	else
		printf("present\n");
	printf("%d\n",ferror(p));
	fclose(p);

	return 0;
}