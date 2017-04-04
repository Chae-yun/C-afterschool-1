#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a,b;
	printf("정수를 하나 입력하세요 : ");
	scanf("%d", &a);
	b = a * 10;
	printf("%d에 10을 곱한 값은 %d입니다.\n", a, b);
}