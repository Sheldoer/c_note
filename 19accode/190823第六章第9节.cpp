#include<stdio.h>
void show(char *a,int len)
{
	for(int i=0;i<len;++i)
	{
		printf("%d\n",a[i]);
		
	}
}
int main(void)
{



	char a[30],b[30],c[30],ch;
	/*gets(a);
	ch=getchar();
	puts(a);                //puts º¯Êý
	putchar(ch);

	/*scanf("%s%s%s%c",a,b,c,&ch);
	printf("%s%s%s%c",a,b,c,ch);
	
	show(a,30);


	/*char a[10]={'h','a',' ','h','e','\n'};
	printf("haha\0hehe");
	putchar('\n');
	printf("%s","ABCD");
	putchar('\n');
	printf("%s",a);
	char b[10]={"ha ha\n"};
	char c[10]="ha hah\n";
	char d[]="ha";
	char *ch="haah\n";
	printf("AAA%s",ch);*/
	return 0;

}