#include<stdio.h>
#include<stdlib.h>
#define max 100
void changex(int A[], int len, int x) {
	int low = 0, high = len;//±ê¼ÇÍ·Î²
	int mid = (low + high) / 2;
	while (low <= high && A[mid] != x) {
		mid = (low + high) / 2;
		if (A[mid] == x)
			break;
		else if (A[mid] > x)
			high = mid - 1;
		else
			low = mid + 1;
	}
	if (A[mid] == x) {
		A[mid] = A[mid + 1];
		A[mid + 1] = x;
	}
	else {
		for (int i = len; i >= high+1; i--)
			A[i + 1] = A[i];
		A[high+1] = x;
	}
}
void findx(int A[], int len, int x) {
	int index = 0;
	int i = 0;
	for (i; i < len; i++) {
		if (A[i] == x) {
			if (i != len - 1) {
				int t = A[i];
				A[i] = A[i + 1];
				A[i + 1] = t;
				return;
			}
			else if (A[i] > x) {
				index = i;
				break;
			}
		}
		for (i = len; i > index; i--)
			A[i] = A[i - 1];
		A[index] = x;
	}
}