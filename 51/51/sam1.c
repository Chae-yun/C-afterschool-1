#include <stdio.h>

void PrintArray(int *arr, int size);
int GetSumOfArray(int *arr, int size);

int main()
{
	int x[5] = { 10, 20, 30, 40, 50 };
	int y[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("x 배열 : ");
	PrintArray(x, 5);
	printf("합계 : %d\n\n", GetSumOfArray(x, 5));
	printf("y 배열 : ");
	PrintArray(y, 10);
	printf("합계 : %d\n\n", GetSumOfArray(y, 10));
}
void PrintArray(int *arr, int size){
	for (int i = 0; i < size; i++){
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
int GetSumOfArray(int *arr, int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	return sum;
}