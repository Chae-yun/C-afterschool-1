#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char x;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", &x);
	if (x >= 'a' && x <= 'z')
		x -= 32;
	printf("%c\n", x);
}