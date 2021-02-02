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
	printf("请输入学生的姓名，年龄和成绩：\n");
	scanf("%s%d%1f",a.name,&a.age,&a.score);
	printf("学生的姓名：%s，年龄：%d，成绩：%f \n",a.name,a.age,a.score);//?为什么输不出浮点数？？？
	return 0;
}