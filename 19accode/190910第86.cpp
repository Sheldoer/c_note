#include<stdio.h>
int main(void)
{
	short a;
	int b;
	double c;
	printf("%d,%d,%d\n",(int)&a%2,(int)&b%4,(int)&c%8);
	struct stu1
	{
		char a;
		short b;
	};
	struct stu2
	{
		char a;
		int b;
	};
	struct stu1 A;
	struct stu2 B;
	printf("%d,%d\n",(int)&A%2,(int)&B%4);
	printf("%d,%d\n",sizeof(A),sizeof(B));

	return 0;
}