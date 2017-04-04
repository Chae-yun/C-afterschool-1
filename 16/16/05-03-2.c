#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number, sum;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &number);
	while (number >= 10){
		sum = 0;
		while (number != 0){
			sum += number % 10;
			number /= 10;
		}
		number = sum;
		printf("==> %d ", number);
	}
	printf("결과 : %d\n", number);
}