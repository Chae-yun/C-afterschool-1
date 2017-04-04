#include<stdio.h>
int main()
{
	int i, j, total[3][3];
	int arr1[3][3] = { { 3, 6, 9 }, { 6, 8, 4 }, { 7, 8, 9 } },
		arr2[3][3] = { { 5, 7, 3 }, { 9, 6, 1 }, { 9, 4, 6 } };
	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			total[i][j] = arr1[i][j] + arr2[i][j];

	printf("µ¡¼À\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++)
			printf("%4d ", total[i][j]);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			total[i][j] = arr1[i][j] - arr2[i][j];

	printf("\n»¬¼À\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++)
			printf("%4d ", total[i][j]);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			total[i][j] = arr1[i][j] * arr2[i][j];

	printf("\n°ö¼À\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++)
			printf("%4d ", total[i][j]);
		printf("\n");
	}
}