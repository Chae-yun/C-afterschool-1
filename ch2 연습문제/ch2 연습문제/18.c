#include <stdio.h>
#include <math.h>
#pragma warning(disable:4996)
int main()
{
	int originmoney, period, money;
	double interest;
	printf("���ݰ� ���ݱⰣ(��), �׸��� �����ڸ� �Է��ϼ��� : ");
	scanf("%d %d %lf", &originmoney, &period, &interest);
	money = originmoney*pow(1 + interest / 100, period);
	printf("�ݾ� = %d", money);
}