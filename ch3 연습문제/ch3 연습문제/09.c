#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	double a;
	printf("실수를 입력하시오 : ");
	scanf("%lf", &a);
	if (a < 0)
		a *= -1;
	a = sqrt(a);
	printf("제곱근은 %lf입니다.", a);
}