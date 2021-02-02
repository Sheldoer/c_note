#include <stdio.h>
int main(void)
{
	char a,b,c;
	for(char i='X';i<='Z';++i)
	{
		a=i;
		for(char j='X';j<='Z';++j)
		{
			if(i==j)
				continue;
			b=j;
			for(char k='X';k<='Z';++k)
			{
				if(k==i||k==j)
					continue;
				c=k;
				if(a!='X'&&c!='X'&&c!='Z')
					printf("A和%c,B和%c,C和%c比赛\n",a,b,c);
			}
		}
	}
/*int i=1,j=1,k=0;
	for(int o=1;o<=10;)
	{
		
		k=i+j;
		i=j;
		j=k;


		
		if(j%3!=0)
			printf("%d\n",j);
			o+=1;
	}


	

/*for(int j=1;j<=4;++j)
	{
		for(int i=1;i<=5;++i)
		{
			printf("%5d",i*j);
		}
		printf("\n");
	}

	
/*for(int i=1;i<=100;++i)
	{
#if 1
		if(i%3==0)
			continue;				//coutinue
		printf("%d\n",i);
#else 
		if(i%3!=0)
			printf("%d\n",i);
#endif
	}

/*int a,sum=0;
	for(int i=1;i<=10;++i)
	{
		scanf("%d",&a);
		sum+=a;
		if(sum>=1000)
			break;						//break
	}
	printf("总的捐款数目为%d\n",sum);
/*int i=1,s=1,sum=0;
	do											 //do while
	{
		s*=i;
		sum+=s;
		++i;
	}
	while(i<=5);
	printf("%d\n",sum);
	*/

	return 0;
}