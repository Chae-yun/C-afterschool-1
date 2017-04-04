#include<stdio.h>
int main()
{
	int i, j, total[2][2];
	int arr1[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } },
		arr2[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++)
			total[i][j] = arr1[i][0] * arr2[0][j] + arr1[i][1] * arr2[1][j] + arr1[i][2] * arr2[2][j];
	}
	
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++)
			printf("%4d ", total[i][j]);
		printf("\n");
	}
}