#include"head.h"
int main(void) {
	
	int num[max] = { 1,5,6,9,12,15,22 };
	int len = 7;
	
	changex(num, len, 33);
	//findx(num, len, 7);
	for (int i = 0; i < len+3; i++)
		printf("%d ", num[i]);
	return 0;
}