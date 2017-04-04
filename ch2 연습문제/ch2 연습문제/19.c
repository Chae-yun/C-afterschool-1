#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	num = (num / 5 - num / 10) * 10;
	printf("반올림하면 %d입니다.\n", num);

}