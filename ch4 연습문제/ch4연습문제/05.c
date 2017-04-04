#include <stdio.h>
#define SWAP(x,y) temp=x; x=y; y=temp
#pragma warning(disable:4996)
int main()
{
	int x, y, temp=0;
	printf("교환할 두 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);
	SWAP(x,y);
	printf("교환 결과는 x = %d, y = %d\n", x, y);
}