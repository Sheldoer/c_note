#include<stdio.h>
typedef union
{
	int a;
	char  b[4];
}A;
int main(void)
{
	A c;
	c.b[0]='A';
	c.b[1]='B';
	c.b[2]='C';
	c.b[3]='D';
	printf("%d\n",c.a);
	return 0;
}