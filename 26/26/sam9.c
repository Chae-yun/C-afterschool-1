#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int size;
	int *arr = NULL;
	int sum = 0;
	double average = 0.0;
	int i;
	printf("몇 개의 정수를 입력하시겠습니까? : ");
	scanf("%d", &size);
	arr = malloc(sizeof(int)*size);
	if (arr == NULL){
		printf("동적 메모리 할당 실패\n");
		return -1;
	}
	printf("%d개의 정수를 입력하시오 : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < size; i++)
		sum += arr[i];
	average = (double)sum / (double)size;
	printf("합계 : %d, 평균 : %f\n", sum, average);
	free(arr);
	arr = NULL;
	return 0;
}