#include<stdio.h>
typedef int count;
typedef int Num[3];
typedef struct
{
	int a;
	double b;
}stu;
#define INT int

int main(void)
{
	count a=3;
	printf("%d\n",a);
	Num b={1,2,3};
	printf("%d,%d,%d\n",b[0],b[1],b[2]);
	stu m={13,3.2};
	printf("%d,%1f\n",m.a,m.b);
	INT c=10;
	printf("%d\n",c);
	return 0;
}