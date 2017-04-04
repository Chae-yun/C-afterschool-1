#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &x);
	x = (x % 2) ? (x + 1) / 2 : x / 2;
	printf("%d\n",x);
}