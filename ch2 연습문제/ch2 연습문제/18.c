#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	int originmoney, period, money;
	double interest;
	printf("원금과 예금기간(년), 그리고 연이자를 입력하세요 : ");
	scanf("%d %d %lf", &originmoney, &period, &interest);
	money = originmoney*pow(1 + interest / 100, period);
	printf("금액 = %d", money);
}