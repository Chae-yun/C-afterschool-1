#include <stdio.h>
#pragma warning(disable:4996)
#define area(radian) radian*radian*3.14
int main()
{
	double radian;
	printf("원의 넓이는 반지름을 입력하시오 : ");
	scanf("%lf", &radian);
	printf("원의 넓이는 %.1lf 입니다.\n", area(radian));
}