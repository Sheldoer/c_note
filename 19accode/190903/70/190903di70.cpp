#include<stdio.h>
extern int A;
extern int *P;

int main(void)
{
	printf("%d\n",A);
	printf("%d\n",*P);
	return 0;
}
static int A=22;//extern ���ȱ��ļ�Ѱ�Ҷ��� û�ҵ���ȥ�����ļ�����