#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char x;
	printf("문자를 입력하세요 : ");
	scanf("%c", &x);
	x = (x >= 'a' && x <= 'z') ? x - 32 : x;
	printf("%c\n", x);
}