#include<stdio.h>
int lengthOfLongestSubstring(char * s){

	int i;                  /*    计数器    */

	int count = 0;          /* 子串当前长度 */
	
	int max = 0;            /* 子串最大长度 */

	int start = 0;          /* 子串起始位置 */

	int index[128] = {0};   /* 记录每个字符先后出现位置 */

	for(i = 0; s[i] != '\0'; i++){

		if(index[s[i]] > start){ /* 若为真，则说明字符s[i]在之前重复出现过 */

			count = i - start; /* 记录此时子串的长度 */

			if(count > max) /* 若当前子串大于先前记录的最大字串长度，则更新max */

				max = count;

			start = index[s[i]]; /* 更新新子串的起始位置 */

		}

		index[s[i]] = i + 1; /* 记录字符s[i]在整个字符串中出现的位置 */

	}

	count = i - start; /* 计算最后一个子串的长度 */

	return count > max ? count : max;
	main(){
