#include<stdio.h>
#include<stdlib.h>
void f(void)
{
	int *p=(int *)malloc(sizeof(int)*10);
	if(p==NULL)
	{
		printf("�ڴ����ʧ��,�����˳�\n");
		exit(-1);
	}
	free(p);
	p=NULL;
	free(p);
}
void g(void)
{
	int *p=(int*)realloc(NULL,sizeof(int)*4);
	if(p==NULL)
	{
		printf("�ڴ����ʧ��,�����˳�\n");
		exit(-1);
	}
	for(int i=0;i<4;++i)
		p[i]=i;
	printf("��ַΪ%p\n",p);
	printf("��ַΪ%p\n",p=(int*)realloc(p,1000));
	for(i=0;i<4;++i)
		printf("%d\n",p[i]);
	printf("%d\n",realloc(p,0));   //�ȼ���free(p);

	//printf("��ַΪ%p\n",realloc(p,1000));
}
int main(void)
{
	f();
	g();

	/*int n;
	printf("������ѧ����");
	scanf("%d",&n);
	char * a =(char *)malloc(65*n);
	if(a==NULL)
	{
		printf("�ڴ����ʧ��,�����˳�\n");
		exit(-1);
	}
	for(int i=0;i<n;++i)
	{
		printf("�������%d��ѧ��������������ͳɼ���\n",i+1);
		scanf("%s%d%1f",a+65*i,(int *)(a+50+65*i),(double *)(a+54+65*i));
	}
	for(i=0;i<n;++i)
	{
		printf("��%d��ѧ��������:%s����:%d�ɼ�:%1f\n",i+1,a+65*i,*(int *)(a+50+65*i),*(double *)(a+54+65*i));
	}
	free(a);
	*/
	return 0;
}