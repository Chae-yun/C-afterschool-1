#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int *a, max, min;
	a = calloc(100, sizeof(int));
	srand(time(0));
	a[0] = rand();
	max = min = a[0];
	for (int i = 1; i < 100; i++){
		a[i] = rand();
		if (max < a[i]){
			max = a[i];
		}
		if (min > a[i]){
			min = a[i];
		}
	}
	for (int j = 0; j < 100; j++) //�����͸� �����ϸ鼭
		printf("%d  ", a[j]);
	printf("\n�ִ��� %d, �ּڰ��� %d\n", max, min);
	free(a);
}