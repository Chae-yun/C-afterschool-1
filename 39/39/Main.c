#include <stdio.h>
#include "Array.h"

int main()
{
	int x[5] = { 43, 6, 24, 88, 34 };
	int y[10] = { 12, 35, 7, 45, 78, 22, 98, 77, 1, 28 };
	printf("x �迭 : ");
	PrintArray(x, 5);
	printf("x�� �հ� : %d\n\n", GetSumOfArray(x, 5));
	printf("y �迭 : ");
	PrintArray(y, 10);
	SortArray(y, 10);
	printf("������ : ");
	PrintArray(y, 10);
	printf("y�� �հ� : %d\n\n", GetSumOfArray(y, 10));
	return 0;
}