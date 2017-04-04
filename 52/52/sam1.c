#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, sum;
	printf("16진수로 두 개의 정수를 입력하시오 : ");
	scanf("%x%x", &a, &b);
	sum = a + b;
	printf("합의 결과\n8진수 : %o, 10진수 : %d, 16진수 : %x\n", sum, sum, sum);
}