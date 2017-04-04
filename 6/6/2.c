#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	double num1, num2, add, sub;
	printf("실수 2개를 입력하세요 : ");
	scanf("%lf %lf", &num1, &num2); //더블은 %lf
	add = num1 + num2;
	sub = num1 - num2;
	printf("실수 2개를 더한 값은 %lf입니다.\n실수 2개를 뺀 값은 %lf입니다.", add, sub);
}