#include<stdio.h>
int main(void)
{
	//int a[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	/*int a[3][4]={
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	
	//int a[3][4]={1};
	//int a[3][4]={{1,2},{3},{4}};
	
	for(int i=0;i<12;++i)
		printf("%d\n",a[i/4][i%4]);*/
//�����ʽ1
	int a[][4]={1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<3;++i)
		for(int j=0;j<4;j++)
			printf("%d\n",a[i][j]);
		

	return 0;
}