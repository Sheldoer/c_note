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