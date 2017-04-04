#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char name = "";
	fputs("이름을 입력하시오 : ", stdout);
	gets(name);
	printf("입력된 이름 : ");
	puts(name);
}