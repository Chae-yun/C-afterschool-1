#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[50];
	printf("영어로 된 문자열을 입력하시오 : ");
	gets(str);
	str[0] = toupper(str[0]);
	for (int i = 0; i<strlen(str); i++){
		if (isspace(str[i]))
			str[i + 1] = toupper(str[i + 1]);
	}
	printf("변경 후 문자열 : %s\n", str);
}