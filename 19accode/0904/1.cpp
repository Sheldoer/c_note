#include<stdio.h>
extern void f(void);
extern void (*P)(void);
int main(void)
{
	f();
	(*P)();
	return 0;
}