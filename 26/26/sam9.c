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
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &size);
	arr = malloc(sizeof(int)*size);
	if (arr == NULL){
		printf("���� �޸� �Ҵ� ����\n");
		return -1;
	}
	printf("%d���� ������ �Է��Ͻÿ� : ", size);
	for (i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	for (i = 0; i < size; i++)
		sum += arr[i];
	average = (double)sum / (double)size;
	printf("�հ� : %d, ��� : %f\n", sum, average);
	free(arr);
	arr = NULL;
	return 0;
}