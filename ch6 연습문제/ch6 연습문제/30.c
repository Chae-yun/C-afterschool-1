#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number[20], y, m, d, g;
	char gender;
	printf("�ֹι�ȣ�� �Է��Ͻʽÿ� : ");
	scanf("%s", number);
	sscanf(number, "%2d%2d%2d-%1d", &y, &m, &d, &g);
	if (g > 2)
		y += 2000;
	else
		y += 1900;
	printf("���� : %d�� %d�� %d�� ���� : ", y, m, d);
	if (g % 2)
		printf("����\n");
	else
		printf("����\n");
}