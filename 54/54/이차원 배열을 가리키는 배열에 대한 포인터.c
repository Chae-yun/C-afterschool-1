#include <stdio.h>
int main()
{
	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 } };
	int(*p)[5] = arr; //==&arr[0]
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 5; j++){
			printf("%3d", p[i][j]); //p[0][i] 또는 *((*p)+i)도 가능
		}
		printf("\n");
	}
}