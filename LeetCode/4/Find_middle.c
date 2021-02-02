#include<stdio.h>
double findMedianSortedArrays(int* nums1, int size1, int* nums2, int size2) {
	int len = size1 + size2;
	int p1 = 0, p2 = 0;
	int pre = -1, next = -1;
	for (int i = 0; i <= len / 2; i++) {
		pre = next;
		if (p1 < size1 && (p2 >= size2 || nums1[p1] < nums2[p2]))
			next = nums1[p1++];
		else
			next = nums2[p2++];
	}

	if (len % 2 == 0)
		return (pre + next) / 2.0;
	return next;
}

/*
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
	int i = 0, j = 0;
	double middle;
	int sum = nums1Size + nums2Size;
	for (int n = 0; n < sum; n++) {
		if (nums1[i] > nums2[j])
			j++;
		else
			i++;
	}
	if (sum % 2 == 0)
		middle = nums1[i] + nums2[j];
	else {
		if (nums1[i] > nums2[j])
			middle = nums2[j];
		else
			middle = nums1[i];
	}
	return middle;

}
*/
int main(void) {
	int nums1[5] = { 1,5,6,8,10};
	int nums2[5] = {2,7,40,42,44};
	printf("width1 is %d\nwidth2 is %d\n", sizeof(nums1), sizeof(nums2));
	int middle=findMedianSortedArrays(nums1, 5, nums2, 5);
	printf("The middle num is %f", middle);
	return 0;
}