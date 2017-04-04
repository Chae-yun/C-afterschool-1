#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, count=1, sum=0, max, min;
	double average;
	printf("엔터를 치면서 10개의 정수를 입력하시오 : ");
loop:
	scanf("%d", &num);
	if (count == 1){
		max = num;
		min = num;
	}
	sum += num;
	if (max < num)
		max = num;
	if (min > num)
		min = num;

	if (count < 10){
		count++;
		goto loop;
	}
	average = sum / (double)count;
	printf("합은 %d, 평균은 %lf, 최댓값은 %d, 최솟값은 %d입니다.\n", sum, average, max, min);
}