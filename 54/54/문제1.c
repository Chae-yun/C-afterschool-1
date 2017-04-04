#include <stdio.h>
int Sum3(int (*arr)[2], int size); //== int arr[][2], int size
int Sum4(int(*arr)[3], int size); //== int arr[][3], int size
int main()
{
	int sum = 0;
	int arr3[2][2] = { 1, 3, 5, 7 };
	int arr4[2][3] = { 1, 2, 3, 4, 5, 6 };
	sum += Sum3(arr3, 2);
	sum += Sum4(arr4, 2);
	printf("гу : %d\n", sum);
}
int Sum3(int (*arr)[2], int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < 2; j++)
			sum += arr[i][j];
	}
	return sum;
}
int Sum4(int(*arr)[3], int size){
	int sum = 0;
	for (int i = 0; i < size; i++){
		for (int j = 0; j < 3; j++)
			sum += arr[i][j];
	}
	return sum;
}