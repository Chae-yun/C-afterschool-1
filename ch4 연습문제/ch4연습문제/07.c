#include <stdio.h>
#pragma warning(disable:4996)
#define IS_EQUAL(x) x==b
int main()
{
	int a, b;
	printf("두 정수를 입력하시오 : ");
	scanf("%d %d", &a, &b);
	if (IS_EQUAL(a))
		printf("같습니다.\n");
	else
		printf("다릅니다.\n");
}