#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int count, sum = 0;
	int *num = NULL;
	double average = 1;
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ� ? : ");
	scanf("%d", &count);
	num = malloc(4 * count);
	if (num == NULL){
		return -1;
	}
	printf("%d���� ������ �Է��ϼ��� : ", count);
	for (int i = 0; i < count; i++){
		scanf("%d", &num[i]);
		sum += num[i];
	}
	average = sum / count;
	printf("�հ� : %d, ��� : %lf\n", sum, average);
	free(num);
}