#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &x);
	x = x < 0 ? -x : x;
	printf("%d\n", x);
}