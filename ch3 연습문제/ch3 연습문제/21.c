#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int old;
	printf("나이를 입력하시오 : ");
	scanf("%d", &old);
	if (old <= 7)
		printf("무료입장 입니다.");
	else if (old <= 12)
		printf("500원 입니다.");
	else if (old <= 19)
		printf("700원 입니다.");
	else if (old <= 64)
		printf("1500원 입니다.");
	else if (old >= 65)
		printf("1000원 입니다.");
}