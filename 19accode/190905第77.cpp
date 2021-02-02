#include<stdio.h>
#include<string.h>
void show(char *a[4],int len)
{
	for(int i=0;i<len;++i)
		puts(a[i]);
}
void sort(char **a,int len)
{
	for(int i=0;i<len-1;++i)
		for(int j=0;j<len-i-1;++j)
		{
			if(strcmp(a[j],a[j+1])>0)     //strcmpº¯Êý²»»á
			{
				char *P=a[j];
				a[j]=a[j+1];
				a[j+1]=P;
			}
		}
}
int main(void)
{
	char *a[4]={"haha","lala","hello","hehe"};
	sort(a,4);
	show(a,4);
	return 0;
}
