#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int n;
	printf("정수를 입력해주세요 : ");
	scanf("%d", &n);
	n % 2 == 0 ? printf("짝수\n") : printf("홀수\n");
}