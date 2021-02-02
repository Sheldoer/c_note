#include<stdio.h>
union data
{
	int i;
	char ch;
	double f;
};
union data1
{
	int i;
	char ch;
	double f;
}w,*u;
union
{
	int i;
	char ch;
	double f;
}w1={1234},*u1;

int main(void)
{
	union data a;
	a.i=3;
	printf("%d\n",a.i);
	a.ch='A';
	printf("%c\n",a.ch);
	a.f=3.14;
	printf("%1f\n",a.f);
	printf("%d,%c\n",a.i,a.ch);
	union data b={123};
//	union data c={.f=4.5};
	union data d=b;
	union data
	{
	double i;
	char a[13];
	}g;
	printf("%d\n",sizeof(g));
	return 0; 
}