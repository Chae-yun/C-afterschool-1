#include<stdio.h>
int main()
{
	int arr[3][5] = { { 70, 50, 60, 0, 0 }, { 70, 80, 100, 0, 0 }, { 70, 70, 70, 0, 0 } };
	int (*p)[5] = arr;
	int i, j;
	printf("| 국어| 영어| 수학| 총합| 평균|\n");
	printf("|-----|-----|-----|-----|-----|\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++)
			p[i][3] += arr[i][j];
		p[i][4] = p[i][3] / 3;
	}
	for (i = 0; i < 3; i++){
		printf("|");
		for (j = 0; j < 5; j++)
			printf("%4d |", p[i][j]);
		printf("\n");
	}
	return 0;
}