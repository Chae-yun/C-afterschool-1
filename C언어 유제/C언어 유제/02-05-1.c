#include <stdio.h>
int main()
#pragma warning(disable:4996)
{
	int tempC;
	double tempF;
	printf("���ϴ� ���� �µ��� �Է��ϼ���");
	scanf("%d", &tempC);
	tempF = tempC*1.8 + 32.;
	printf("���� %d���� ȭ�� %f�� �Դϴ�.", tempC, tempF);
}