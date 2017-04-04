#include <stdio.h>
#include "Array.h"

int main()
{
	int x[5] = { 43, 6, 24, 88, 34 };
	int y[10] = { 12, 35, 7, 45, 78, 22, 98, 77, 1, 28 };
	printf("x 배열 : ");
	PrintArray(x, 5);
	printf("x의 합계 : %d\n\n", GetSumOfArray(x, 5));
	printf("y 배열 : ");
	PrintArray(y, 10);
	SortArray(y, 10);
	printf("정렬후 : ");
	PrintArray(y, 10);
	printf("y의 합계 : %d\n\n", GetSumOfArray(y, 10));
	return 0;
}