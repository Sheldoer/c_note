#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node *pnext;
}N,*P;
P creat(void)
{
	P pheard=(P)malloc(sizeof(N));
	if(pheard==NULL)
	{
		printf("·ÖÅäÄÚ´æÊ§°Ü£¬³ÌĞòÍË³ö\n");
		exit(-1);
	}
	pheard->pnext=NULL;
	return pheard;
}
void input(P pheard,int value)
{
	P last=(P)malloc(sizeof(N));
	if(last==NULL)
	{
		printf("ÄÚ´æ·ÖÅäÊ§°Ü£¬³ÌĞòÍË³ö\n");
		exit(-1);
	}
	last->data=value;
	last->pnext=NULL;
	while(pheard->pnext!=NULL)
		pheard=pheard->pnext;
	pheard->pnext=last;
}
void show(P pheard)
{
	while(pheard->pnext!=NULL)
	{
		pheard=pheard->pnext;
		printf("%d\n",pheard->data);
	}
}
int len(P pheard)
{
	for(int i=0;pheard->pnext!=NULL;++i)
		pheard=pheard->pnext;
	return i;
}
bool del(P pheard,int index)
{
	if(index<=0||index>len(pheard))
		return false;
	for(int i=1;i<index;++i)
		pheard=pheard->pnext;
	P ptail=pheard->pnext->pnext;
	free(pheard->pnext);
	pheard->pnext=ptail;
	return true;
}
bool insert(P pheard,int index,int value)
{
	if(index<=0||index>len(pheard)+1)
		return false;
	P pw=(P)malloc(sizeof(N));
	if(pw==NULL)
	{
		printf("·ÖÅäÄÚ´æÊ§°Ü£¬³ÌĞòÍË³ö\n");
		exit(-1);
	}
	pw->data=value;
	for(int i=1;i<index;++i)
		pheard=pheard->pnext;
	pw->pnext=pheard->pnext;
	pheard->pnext=pw;
}
void invert(P pheard)
{
	if(pheard->pnext==NULL)
		return;
	P p0=pheard->pnext;
	P p1=p0->pnext;
	P p_0=p0,p2;
	while(p1!=NULL)
	{
		p2=p1->pnext;
		p1->pnext=p0;
		p0=p1;
		p1=p2;
	}
	pheard->pnext=p0;
	p_0->pnext=NULL;
}
int main(void)
{
	P pheard=creat();
	input(pheard,1);
	input(pheard,2);
	input(pheard,3);
	input(pheard,4);
	insert(pheard,2,10);
	invert(pheard);
	show(pheard);
	
	printf("%d\n",len(pheard));
	return 0;
}