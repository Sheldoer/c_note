#include<stdio.h>
struct student
{
	char name[30];
	int age;
	double score;

};
struct student2
{
	char name[30];
	int age;
	double score;
}A,*P;
struct student3
{
	char name[30];
	int age;
	double score;
}A1={"zhangsan",20},*P1;
struct
{
	char name[30];
	int age;
	double score;
}A2,*P3;
int main(void)
{

	struct student a;
	printf("������ѧ��������������ͳɼ���\n");
	scanf("%s%d%1f",a.name,&a.age,&a.score);
	printf("ѧ����������%s�����䣺%d���ɼ���%f \n",a.name,a.age,a.score);//?Ϊʲô�䲻��������������
	return 0;
}