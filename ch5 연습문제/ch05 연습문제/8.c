#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int sum = 0, count = 0, num, i = 1;
	double avera = 1;
	printf("20개의 숫자를 입력하시오\n");
	while(i <= 20){
		scanf("%d", &num);
		sum += num;
		count++;
		i++;
	}
	avera = sum / count;
	printf("합 : %d, 평균 : %lf", sum, avera);
}