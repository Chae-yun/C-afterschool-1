#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int count, sum = 0;
	int *num = NULL;
	double average = 1;
	printf("몇 개의 정수를 입력하시겠습니까 ? : ");
	scanf("%d", &count);
	num = malloc(4 * count);
	if (num == NULL){
		return -1;
	}
	printf("%d개의 정수를 입력하세요 : ", count);
	for (int i = 0; i < count; i++){
		scanf("%d", &num[i]);
		sum += num[i];
	}
	average = sum / count;
	printf("합계 : %d, 평균 : %lf\n", sum, average);
	free(num);
}