#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	double arr[5];
	int i;
	double *p = NULL;
	double sum = 0.0;
	printf("5���� �Ǽ��� �Է��Ͻÿ� : ");
	for (i = 0; i < 5; i++)
		scanf("%lf", &arr[i]);
	p = arr;
	for (i = 0; i < 5; i++){
		sum += *(p+i);
	}
	printf("�հ� : %.2lf\n", sum);
	return 0;
}