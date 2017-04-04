#include<stdio.h>
int main()
{
	int i, j, x[] = { 5, 5, 3, 4, 6, 8, 10, 1, 2, 3 };
	int array_count = sizeof(x) / sizeof(x[0]);
	printf("배열개수 : %d\n", array_count);
	for (i = 0; i < array_count; i++){
		printf("%2d : ", x[i]);
		for (j = 0; j < x[i]; j++){
			printf("%c", '*');
		}//for2
		printf("\n");
	}//for1
}