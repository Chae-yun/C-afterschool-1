#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int arr[5];
	int *p = NULL;
	int *q = NULL;
	int i, j;
	printf("5���� ������ �Է��ϼ��� : ");
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
	printf("���� �� : ");
	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
	