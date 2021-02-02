#include<stdio.h>
extern int A;
extern int *P;

int main(void)
{
	printf("%d\n",A);
	printf("%d\n",*P);
	return 0;
}
static int A=22;//extern 优先本文件寻找定义 没找到则去其他文件查找