#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int *x, *y, i, sum = 0;
	double average;
	x = calloc(10, sizeof(int));
	y = x;
	for (i = 0; i < 10; i++, y++){
		printf("data input : ");
		scanf("%d", y);
	}
	y = x;
	for (i = 0; i < 10; i++, y++)
		sum += *y;
	average = (int)sum / 10.0;
	printf("Average = %f\n", average);
	free(x);
}