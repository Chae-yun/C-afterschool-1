#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, j, k, m;
	printf("10 이하의 수를 입력하시오 : ");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		for (k = i; k <= x; k++)
			printf("%d", k);
		for (m = k - 2; m >= i; m--)
			printf("%d", m);
		printf("\n");
	}
	for (int i = 1; i <= x - 1; i++)
	{
		for (j = 1; j < x - i; j++)
			printf(" ");
		for (k = x - i; k <= x; k++)
			printf("%d", k);
		for (m = k - 2; m >= x - i; m--)
			printf("%d", m);
		printf("\n");
	}
}