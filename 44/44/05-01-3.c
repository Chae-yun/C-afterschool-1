#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number, d = 1;
	printf("정수 입력 : ");
	scanf("%d", &number);
	printf("%d의 약수 = ", number);
	while (number / 2 >= d){ //number/2까지 즉 입력한 수의 반까지만 계산
		if (number%d == 0)
			printf("%d ", d);
		d++;
	}
	printf("%d \n", number);
}