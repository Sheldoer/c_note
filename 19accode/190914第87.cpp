#include<stdio.h>
#define N 4
struct stu
{
	char name[30];
	int score;
};
void input(struct stu *p,int len)
{
	for(int i=0;i<len;++i)
	{
		printf("�������%d��ѧ���������ͳɼ���\n",i+1);
		scanf("%s%1f",p[i].name,&p[i].score);
	//	scanf("%s%1f",(p+i)name,&(P+i)score);
	}
}
void sort(struct stu *p,int len)
{
	for(int i=0;i<len-1;++i)
		for(int j=0;j<len-1-i;++j)
		{
			if(p[j].score>p[j+1].score)
			{
				struct stu b=p[j];
				p[j]=p[j+1];
				p[j+1]=b;
			}
		}
}
void show(struct stu *p,int len)
{
	for(int i=0;i<len;++i)
		printf("��%d��ѧ����������%s���ɼ���%d\n",i+1,p[i].name,p[i].score);
}
int main(void)
{
	struct stu n[]={{"zhangsan",3},{"lisi",4},{"wangwu",5}};
	show(n,3);
	struct stu a[N];
	input(a,N);
	sort(a,N);
	show(a,N);
	return 0;
}