#include<stdio.h>
int main()
{
	int *add[3], *one[3], *two[3], i, j, oneone = 1, twotwo = 12;
	for (i = 0; i < 3; i++){
		one[i] = malloc(3 * sizeof(int));
		two[i] = malloc(3 * sizeof(int));
		add[i] = malloc(3 * sizeof(int));
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			one[i][j] = oneone;
			two[i][j] = twotwo;
			oneone++;
			twotwo--;
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 4; j++){
			add[i][j] = one[i][j] + two[i][j];
			printf("%d ", add[i][j]);
		}
		printf("\n");
	}
}