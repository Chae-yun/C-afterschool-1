#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int sum = 0, count = 0, num, i = 1;
	double avera = 1;
	printf("20���� ���ڸ� �Է��Ͻÿ�\n");
	while(i <= 20){
		scanf("%d", &num);
		sum += num;
		count++;
		i++;
	}
	avera = sum / count;
	printf("�� : %d, ��� : %lf", sum, avera);
}