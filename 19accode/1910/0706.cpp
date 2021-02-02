#include<stdio.h>
int lengthOfLongestSubstring(char * s){

	int i;                  /*    ������    */

	int count = 0;          /* �Ӵ���ǰ���� */
	
	int max = 0;            /* �Ӵ���󳤶� */

	int start = 0;          /* �Ӵ���ʼλ�� */

	int index[128] = {0};   /* ��¼ÿ���ַ��Ⱥ����λ�� */

	for(i = 0; s[i] != '\0'; i++){

		if(index[s[i]] > start){ /* ��Ϊ�棬��˵���ַ�s[i]��֮ǰ�ظ����ֹ� */

			count = i - start; /* ��¼��ʱ�Ӵ��ĳ��� */

			if(count > max) /* ����ǰ�Ӵ�������ǰ��¼������ִ����ȣ������max */

				max = count;

			start = index[s[i]]; /* �������Ӵ�����ʼλ�� */

		}

		index[s[i]] = i + 1; /* ��¼�ַ�s[i]�������ַ����г��ֵ�λ�� */

	}

	count = i - start; /* �������һ���Ӵ��ĳ��� */

	return count > max ? count : max;
	main(){
