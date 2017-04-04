#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a,b,sum=0;
	printf("정수를 한개 입력하시오 : ");
	scanf("%d", &a);
	for (b = 1; b <= a; b++){
		sum += b;
	}
	printf("1부터 %d까지의 합은 %d\n", a, sum);
	b = 1, sum=0;
	while (b <= a){
		if (b % 2 != 0)
			sum += b;
		b++;
	}
	printf("1부터 %d까지 홀수의 합은 %d\n", a, sum);
	b = 1, sum = 0;
	do{
		if (b % 2 == 0)
			sum += b;
		b++;
	} while (b <= a);
	printf("1부터 %d까지 짝수의 합은 %d\n", a, sum);
}