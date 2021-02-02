#include<stdio.h>
void f1(void)
{
	int ch;
	ch=getchar();
	printf("%c\n",ch);
}
int main(void)
{
	/*
	int i=1, j=4;
	printf("%d,%d\n",--i,j--);
	printf("%d,%d\n",i,j);
	int a;
	printf("%d\n",sizeof((double)a));
	printf("%d\n",sizeof(a));
	*/
	f1();

	return 0;
}