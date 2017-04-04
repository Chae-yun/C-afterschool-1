#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int degree = 1;
	srand(time(0));
	for (int i = 1; i <= 100; i++){
		degree = rand() % 100+1;
		if (degree % 3 == 0){
			printf("³­¼ö : %3d\n", degree);
		}
	}
}