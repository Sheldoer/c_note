#include <stdio.h>

void f1()
{
	int a;
	unsigned char b;
	while((b=getchar()) !='\n')
	{
		putchar(b);
		printf("%c \n",b);
	}
	b=getchar();

	//scanf("%d",&a);
	//printf("f1函数输出的结果%d\n",a);

}
int main(void)
{
	f1();
	return 0;
}

