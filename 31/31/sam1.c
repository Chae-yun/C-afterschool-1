#include<stdio.h>
void PrintArray(int *arr);
int GetSum(int *arr);

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("x 배열 : ");
	PrintArray(x, 5);
	printf("x 배열의 합계 : %d\n\n", GetSum(x, 5));
	printf("y 배열 : ");
	PrintArray(y, 10);
	printf("y 배열의 합계 : %d\n\n", GetSum(y, 10));
	printf("y 배열의 일부분 : ");
	PrintArray(y+2, 5);
	printf("y 배열의 부분합계 : %d\n\n", GetSum(y+2, 5));
}

void PrintArray(int *arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int GetSum(int *arr, int size)
{
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += arr[i];
	return sum;
}