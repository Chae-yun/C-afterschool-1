#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, sum = 0, count = 0;
	double ave;
	for (;;){
		printf("양의 정수를 입력하시오(음수 : 끝) : ");
		scanf("%d", &x);
		if (x < 0)
			break;
		else if (x > 100)
			continue;
		sum += x;
		count++;
	}
	ave = (double)sum / (double)count;
	printf("합 : %d, 평균 : %lf\n", sum, ave);
}