#include<stdio.h>
int main()
{
	int i, j, total[4][4];
	int arr1[4][4] = { { 1, 2, 3, 4 }, { 2, 3, 4, 5 }, { 3, 4, 5, 6 }, { 4, 5, 6, 7 } },
		arr2[4][4] = { { 9, 10, 2, 3 }, { 2, 5, 4, 1 }, { 6, 1, 7, 1 }, { 2, 3, 1, 5 } };

	for (i = 0; i < 4; i++)
	for (j = 0; j < 4; j++)
		total[i][j] = arr1[i][j] + arr2[i][j];

	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++)
			printf("%4d ", total[i][j]);
		printf("\n");
	}
}