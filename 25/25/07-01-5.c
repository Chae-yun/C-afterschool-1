#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int *x, i, sum = 0;
	double average;
	x = (int *)calloc(10, sizeof(int)); //�������� �޸𸮸� �Ҵ��Ͽ� �����͸� x�� ���� (0���� �ʱ�ȭ)
	for (i = 0; i < 10; i++){
		printf("data input : ");
		scanf("%d", &x[i]);
	}
	for (i = 0; i < 10; i++)
		sum += x[i];
	average = (int)sum / 10.0;
	printf("Average = %f\n", average);
	free(x); //�Ҵ�� �޸𸮸� OS���� �����ش�.
}