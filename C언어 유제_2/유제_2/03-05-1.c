#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

int main()
{
	int num;
	printf("실수를 입력해주세요 : ");
	scanf("%d", &num);

	if (num < 0)
	{
		num *= -1;
		printf("음수->양수 : %d\n", num);
	}

	num = sqrt(num);
	printf("제곱근 : %d\n", num);
}