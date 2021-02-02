#include<stdio.h>
char* longestPalindrome(char* s) {
    int N = strlen(s), start = 0, len = 0;  // N �ַ������ȣ� start �Ӵ���ʼλ�ã� len �Ӵ�����
    for (int i = 0; i < N; i++) {   // �������ȵĻ����Ӵ�
        int left = i - 1, right = i + 1;
        while (left >= 0 && right < N && s[left] == s[right]) {
            left--; right++;            // �� i Ϊ���ģ����������죬ֱ�������������
        }                               // left+1 ~ right-1 ��Ϊ��iΪ���ĵ��������Ӵ�
        if (right - left - 1 > len) {   // ���������򱣴���Ӵ���Ϣ
            start = left + 1;
            len = right - left - 1;
        }
    }
    for (int i = 0; i < N; i++) {   // ż�����ȵĻ����Ӵ�
        int left = i, right = i + 1;    // �� i+0.5 Ϊ���ģ�����������
        while (left >= 0 && right < N && s[left] == s[right]) {
            left--, right++;
        }
        if (right - left - 1 > len) {
            start = left + 1;
            len = right - left - 1;
        }
    }
    s[start + len] = '\0';      // ԭ���޸ķ���
    printf("oversee is %s\n", s);
    printf("the number is %d\n", start);
    return s + start;
}
int main(void)
{
    char s[20];
    scanf_s("%s", s);
    printf("result is %s", longestPalindrome(s));

    return 0;

}