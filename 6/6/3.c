#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	printf("%d,%o,%x\n", num, num, num);
	return 0;
}