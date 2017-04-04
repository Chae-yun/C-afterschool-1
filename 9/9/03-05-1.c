#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	if (x < 0)
	{
		x = -x;
	}
	printf("%d\n", x);
}