#include <stdio.h>
#include "Array.h" //내가 만든 헤더니까 <>아니고 ""이다

void PrintArray(const int *arr, int size){
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int GetSumOfArray(int *arr, int size){
	int i;
	int total;
	for (i = 0, total = 0; i < size; i++)
		total += arr[i];
	return total;
}

void SortArray(int *arr, int size){
	int  i, j, index, temp;
	for (i = 0; i < size - 1; i++){
		index = i;
		for (j = i + 1; j < size; j++){
			if (arr[index]>arr[j])
				index = j;
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}