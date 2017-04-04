#include <stdio.h>
#pragma warning(disable:4996)
int sum(int *arr1, int *arr2);
int main()
{
	int arr1[3] = { 5, 10, 15 };
	int arr2[5] = { 1, 2, 3, 4, 5 };
	printf("합은 %d입니다.\n", sum(arr1, arr2));
}
int sum(int *arr1, int *arr2){
	int sum = 0;
	for (int i = 0; i < 3; i++)
		sum += arr1[i];
	for (int i = 0; i < 5; i++)
		sum += arr2[i];
	return sum;
}