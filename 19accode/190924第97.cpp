#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char name[30];
	double score;
}Stu;
int main(void)
{
	Stu a[3]={{"zhangsan",95.3},{"lisi",34},{"wangwu",43.3}};
	FILE *p1=fopen("E:/97.abc","wb");
	if(p1==NULL)
	{
		printf("���ļ�ʧ�ܣ������˳�\n");
		exit(0);
	}
	fwrite(a,sizeof(Stu),3,p1);
	fclose(p1);
	p1=fopen("E:/97.abc","rb");
	if(p1==NULL)
	{
		printf("���ļ�ʧ�ܣ������˳�\n");
		exit(0);
	}
	Stu b[3];
	fread(b,sizeof(Stu),3,p1);
	for(int i=0;i<3;++i)
		printf("��%d��ѧ����������%s,�ɼ���%.1lf\n",i+1,b[i].name,b[i].score);
	fclose(p1);
	p1=NULL;
	return 0;
}