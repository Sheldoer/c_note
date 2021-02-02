#include<stdio.h>
#include<stdlib.h>
void pri(void);
int main(void) {
	int i;
	int len;
	int A[] = { 1,2,3,4,5 };

	for (i = 0; i < 4; i++);
	printf("%d", i);
	return 0;
}
void pri(void) {
	printf("%d", A[2]);
}