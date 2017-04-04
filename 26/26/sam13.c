#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int arr[5];
	int *p = NULL;
	int *q = NULL;
	int i, j;
	printf("5개의 정수를 입력하세요 : ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	for (i = 0, p = arr; i < 5; i++, p++){
		for (j = i + 1, q = p + 1; j < 5; j++, q++){
			if (*p>*q){
				int temp = *p;
				*p = *q;
				*q = temp;
			}
		}
	}
	printf("정렬 후 : ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
	