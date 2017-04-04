#include <stdio.h>
#pragma warning(disable:4996)
#define DECISION(a,b,c) b*b-4*a*c
int main()
{
	double a, b, c;
	printf("ax^2+bx+c=0의 a, b, c를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	if (DECISION(a, b, c) < 0)
		printf("허근입니다.\n");
	else
		printf("실근입니다.\n");
}