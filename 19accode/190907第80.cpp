#include<stdio.h>
#include<stdlib.h>     //malloc calloc free exit
#include<malloc.h>    //malloc calloc free
int main(void)
{
	int n;
	printf("������ѧ����:");
	scanf("%d",&n);
	int * p1=(int *)malloc(sizeof(int)*n);
	if(p1==NULL)
	{
		printf("�ڴ����ʧ��,�����˳�\n");
		exit(-1);
	}
	char (*p2)[50]=(char(*)[50])calloc(n,sizeof(char)*50);
	if(p2==NULL)
	{
		printf("�ڴ����ʧ��,�����˳�\n");
		exit(-1);
	}
	for(int i=0;i<n;++i)
	{
		printf("�������%d��ѧ���ĳɼ���������\n",i+1);
		scanf("%d%s",p1+i,p2[i]);
	}
	for(i=0;i<n;++i)
	{
		printf("��%d��ѧ���ĳɼ�Ϊ%d������%s\n",i+1,p1[i],p2[i]);
	}
	free(p1);
	free(p2);
	return 0;
}