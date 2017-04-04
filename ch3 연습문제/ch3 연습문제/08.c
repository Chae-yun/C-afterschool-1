#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	a = (a % 3 == 0) ? printf("%d 3의 배수\n", a) : printf("%d는 3의 배수가 아님\n", a);
}