#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	double arr[5];
	int i;
	double *p = NULL;
	double sum = 0.0;
	printf("5개의 실수를 입력하시오 : ");
	for (i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);
	p = arr;
	for (i = 0; i < 5; i++){
		sum += *(p+i);
	}
	printf("합계 : %.2lf\n", sum);
	return 0;
}