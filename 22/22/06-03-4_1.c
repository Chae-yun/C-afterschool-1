#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num[10] = { 0 }, i, x, j;
	srand(time(0));
	for (i = 0; i < 100; i++){
		x = rand() % 10 + 0;
		num[x]++;
	}
	for (i = 0; i < 10; i++){
		printf("%d : ", i);
		for (j = 0; j < num[i]; j++)
			printf("*");
		printf("\n");
	}
}