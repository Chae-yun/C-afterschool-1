#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("������ �ϳ� �Է��ϼ��� : ");
	scanf("%d", &x);
	x = (x % 2) ? (x + 1) / 2 : x / 2;
	printf("%d\n",x);
}