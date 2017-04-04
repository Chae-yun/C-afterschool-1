#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, count = 0;
	printf("x를 입력하시오 : ");
	scanf("%d", &x);
	x = x < 0 ? -x : x;
	while (1){
		x /= 10;
		count++;
		if (!x)
			break;
	}
	printf("%d자리\n", count);
}