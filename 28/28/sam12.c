#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int *ip;
	int i, sum = 0;
	ip = malloc(5 * sizeof(int));
	if (ip == 0){
		printf("메모리가 부족합니다!\n");
		return 1;
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++){
		scanf("%d", ip + i);
		sum += ip[i];
	}
	printf("다섯 명의 평균나이 : %.1lf\n", sum / 5.);
	free(ip);
	return 0;
}