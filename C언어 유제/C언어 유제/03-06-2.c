#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c;
	printf("2차 방정식의 계수 3개를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	if (b*b - 4*a * c == 0)
		printf("중근입니다.\n");
	else if (b*b - 4*a * c > 0)
		printf("두 개의 실근\n");
	else
		printf("허근\n");
}