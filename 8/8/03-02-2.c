#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char x;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%c", &x);
	x = (x >= 'a' && x <= 'z') ? x - 32 : x;
	printf("%c\n", x);
}