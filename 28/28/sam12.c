#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int *ip;
	int i, sum = 0;
	ip = malloc(5 * sizeof(int));
	if (ip == 0){
		printf("�޸𸮰� �����մϴ�!\n");
		return 1;
	}
	printf("�ټ� ���� ���̸� �Է��ϼ��� : ");
	for (i = 0; i < 5; i++){
		scanf("%d", ip + i);
		sum += ip[i];
	}
	printf("�ټ� ���� ��ճ��� : %.1lf\n", sum / 5.);
	free(ip);
	return 0;
}