#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number, sum;
	printf("���ڸ� �Է��Ͻÿ� : ");
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
	printf("��� : %d\n", number);
}