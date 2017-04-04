#include <stdio.h>
void GetSum(int(*arr)[5], int *y, int size); //== int arr[][2], int size
int main()
{
	int arr1[5][5] = { 12, 47, 59, 2, 35, 11, 40, 56, 20, 18, 44, 26, 9, 82, 46, 27, 56, 85, 91, 30, 5, 76, 64, 31, 99 };
	int arr2[5] = {0}; // {0}안쓰면 이상한데 왜그럴까
	GetSum(arr1, arr2, 5);
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++)
			printf("%4d", arr1[i][j]);
		printf("  =>  %d\n", arr2[i]);
	}
}
void GetSum(int(*arr)[5], int *y, int size){
	for (int i = 0; i < size; i++){
		for (int j = 0; j < 5; j++)
			y[i] += arr[i][j];
	}
}