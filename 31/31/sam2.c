#include<stdio.h>

void PrintArray(const int *arr, int size);
void SortArray(int *arr, int size); //*arr = arr[]

int main()
{
	int x[5] = { 43, 6, 24, 88, 34 };
	int y[10] = { 12, 35, 7, 45, 78, 22, 98, 77, 1, 28 };

	printf("x 배열 : ");
	PrintArray(x, 5);
	SortArray(x, 5);
	printf("정렬후 : ");
	PrintArray(x, 5);
	printf("\n");

	printf("y 배열 : ");
	PrintArray(y, 10);
	SortArray(y, 10);
	printf("정렬후 : ");
	PrintArray(y, 10);
	printf("\n");
}

void PrintArray(const int *arr, int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void SortArray(int *arr, int size)
{
	int i, j, temp;
	for (i = 0; i < size - 1; i++){
		for (j = i + 1; j < size; j++){
			if (arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}