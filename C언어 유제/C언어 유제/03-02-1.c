#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c, x, y;
	printf("���� 3���� �Է��ϼ��� : ");
	scanf("%d %d %d", &a, &b, &c);
	x = a > b ? a : b;
	y = x > c ? x : c;
	printf("%d\n", y);
}