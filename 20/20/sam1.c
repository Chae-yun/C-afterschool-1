#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int arr[5] = { 0 };
	int a, b, c, d, e, sum = 0;
	double aver;
	printf("5���� ������ �Է��Ͻÿ� : ");
	for (int i = 1; i < 5; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	aver = sum / (double)5;
	printf("�հ� : %d, ��� : %f", sum, aver);
}