#include<stdio.h>
int main()
{
	int sum, avera,i , j;
	int exam[5][5] = { { 10, 80, 100 }, { 20, 40, 40 }, { 50, 50, 100 }, { 90, 90, 20 }, { 70, 60, 70 } };
	printf(" 국어 영어 수학 총합 평균\n");
	printf("--------------------------\n");
	for (i = 0; i < 5; i++)
	{
		/*sum = 0;
		avera = 1;
		for (j = 0; j < 3; j++)
		{
			printf("%5d", exam[i][j]);
			sum += exam[i][j];
			if (j == 2)
			{
				printf("%5d", sum);
			}
		}
		avera = sum / 3;
		printf("%5d", avera);
		printf("\n");*/
		for (j = 0; j < 3; j++){
			exam[i][3] += exam[i][j];
		}
		exam[i][4] = exam[i][3] / 3;
		for (j = 0; j < 5; j++){
			printf("%5d", exam[i][j]);
		}
		printf("\n");
	}
}