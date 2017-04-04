#include <stdio.h>
int main()
#pragma warning(disable:4996)
{
	int r, s;
	printf("원의 반지름을 입력하세요");
	scanf("%d", &r);
	printf("원의 면적은 %dpie 입니다.", r*r);
}