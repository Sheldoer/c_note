#include<stdio.h>
#include<string.h>
/*
int strlen(char *a)
{
	if(a==NULL)
		return 0;
	int len=0;
	while(a[len]!='\0')
		len++;
	return len;
}
char *strwr(char*a)
{
	if(a==NULL)
		return NULL;
	char*a1=a;
	while(*a!='\0')
	{
		if(*a<='Z'&&*a>='A')
			 *a+=32;
		++a;
	}
	return a1;
}
char *strupr(char*a)
{
	if(a==NULL)
		return NULL;
	char*a1=a;
	while(*a!='\0')
	{
		if(*a<='z'&&*a>='a')
			 *a-=32;
		++a;
	}
	return a1;
}

char *strcpy(char*a,char*b)
{
	if(a==NULL||b==NULL)
		return a;
	char*a1=a;
		while((*(a++)=*(b++))!='\0')
		;
	return a1;
}
char *strcat(char*a,char*b)
{
	if(a==NULL||b==NULL)
		return a;
	char*a1=a;
	while(*(a++)!='\0')
		;
	a--;
		while((*(a++)=*(b++))!='\0')
		;
	return a1;
}	
char *strncpy(char*a,char*b,int n)
{
	if(a==NULL||b==NULL)
		return a;
	char*a1=a;
	for(int i=0;i<n;++i)
	{
		a[i]=b[i];
	}
	return a1;
}*/
int main(void)
{
	char a[]="SAhzaha";
	printf("%d\n",strlen(a));
	//printf("%s\n",strwr(a));
	printf("%s\n",strupr(a));
	printf("%s\n",strcpy(a,"lala"));
	printf("%s\n",strcat(a,"123"));
	printf("%s\n",strncpy(a,"afdf",4));
	return 0;

}