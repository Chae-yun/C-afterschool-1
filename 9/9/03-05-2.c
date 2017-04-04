#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char x;
	printf("문자를 입력하시오 : ");
	scanf("%c", &x);
	if (x >= 'a' && x <= 'z')
		x -= 32;
	printf("%c\n", x);
}