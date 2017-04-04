#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i, space = 0;
	char str[100];
	printf("영어로 된 문자열을 입력하시오 : ");
	gets(str);
	for (i = 0; str[i]; i++){
		if (isspace(str[i]))
			space++;
	}
	printf("총 단어의 개수는 %d개입니다.\n", space + 1);
}