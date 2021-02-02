#include<stdio.h>
int main(void)
{
	int a=3,*p1;
	p1=&a;

	char ch='B',*p2;
	p2=&ch;

	void*p3=p1;
	printf("%d\n",*(int *)p3);

	p3=p2;
	printf("%c\n",*(char*)p3);

	return 0;
}
/*int main(int argc,char * argv[])
{
	while(argc-->0)
		printf("%s\n",*(argv++));
	return 0;
}*/
