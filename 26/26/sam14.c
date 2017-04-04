#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[256];
	char str2[256];
	char *p = NULL;
	char *q = NULL;
	int len, i, j = 0;
	printf("문자열을 입력하세요 : ");
	gets(str);
	len = strlen(str);
	p = str;
	q = str2;
	for (i = len - 1; i >= 0; i--){
		*(q + j) = *(p + i);
		j++;
	}
	*(q + j) = 0;
	printf("역순으로 된 문자열 : %s\n", str2);
}