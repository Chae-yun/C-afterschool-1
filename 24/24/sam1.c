#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	/*char s1[] = "abcdefg";
	char s2[] = "012";
	strncpy(s1, s2, strlen(s2));  //s2의 첫 n(strlen(s2))개의 문자열을 s1에 복사(대체하기)
	printf("%s\n", s1);
	return 0;*/

	/*char s1[] = "abcdefg";
	char s2[] = "012";
	memmove(s1 + 3, s2, strlen(s2)); //s2의 첫 n(strlen(s2))개의 문자열을 s1+3에 복사(대체하기)
	printf("%s\n", s1);
	return 0;*/

	char s1[] = "abcdefg";
	char s2[] = "012";
	memcpy(s1 + 3, s2, strlen(s2)); //s2의 첫 n(strlen(s2))개의 문자열을 s1+3에 복사(대체하기)
	printf("%s\n", s1);
	return 0;
}