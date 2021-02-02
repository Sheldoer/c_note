#include<stdio.h>
enum A{a1,a2,a3,a4};
enum B{b1=3,b2,b3,b4=2,b5,b6,b7};
enum C{c1,c2,c3}n;
enum D{d1,d2,d3}m;
enum E{e1,e2,e3}k=e2;
int main(void)
{
	enum A w=a2;          //a2是enum A类型的常量
	w=(enum A)1;
	printf("%d\n",w);
	printf("%d,%d,%d\n",a1,a2,a3,a4);
	printf("%d,%d,%d,%d,%d,%d,%d\n",b1,b2,b3,b4,b5,b6,b7);
	return 0;
}