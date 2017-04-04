#include<stdio.h>
int main()
{
	int k = 1;
	short data[2][3];
	/*data[0][0] = 1;
	data[0][1] = 2;
	data[0][2] = 3;
	data[1][0] = 4;
	data[1][1] = 5;
	data[1][2] = 6;*/
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			data[i][j] = k++;
			printf("%d  ", data[i][j]);
		}
		printf("\n");
	}
}