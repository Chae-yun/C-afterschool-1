#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, sum = 0, count = 0;
	double ave;
	for (;;){
		printf("���� ������ �Է��Ͻÿ�(���� : ��) : ");
		scanf("%d", &x);
		if (x < 0)
			break;
		else if (x > 100)
			continue;
		sum += x;
		count++;
	}
	ave = (double)sum / (double)count;
	printf("�� : %d, ��� : %lf\n", sum, ave);
}