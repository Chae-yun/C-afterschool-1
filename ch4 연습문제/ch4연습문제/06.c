#include <stdio.h>
#pragma warning(disable:4996)
#define EVEN_ODD(x) x%2==0
int main()
{
	int a;
	printf("정수를 한개 입력하시오 : ");
	scanf("%d", &a);
	if (EVEN_ODD(a))
		printf("짝수입니다.\n");
	else
		printf("홀수입니다.\n");
}