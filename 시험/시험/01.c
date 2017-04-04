#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char a;
		printf("영문자를 입력하시오 : ");
		scanf("%c", &a);
		if (a >= 'A' && a <= 'Z')
			printf("대문자입니다.\n");
		else if (a>='a' && a <= 'z')
			printf("소문자입니다.\n");
		else
			printf("영문자가 아닙니다.\n");
}