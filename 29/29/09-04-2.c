#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef union int_or_float{
	int i;
	float f;
}number; //����ü

int main()
{
	number n;
	static char num[33]; //����
	n.i = 236523; //���� ����
	itoa(n.i, num, 2); //itoa�� ǥ���Լ��� �ƴ����� ���� ��κ� ����
	printf("%10d -> %032s\n", n.i, num); //32�ڸ��� ����ϰ� ���� ���ڸ��� 0�� ����϶�

	n.f = 20.5f; //�Ǽ� ����
	itoa(n.i, num, 2); //�Ǽ��� �ƴ� ������ 2������ ��ȯ
	printf("%10.4f -> %032s\n", n.f, num);

	n.f = -0.2f; //�Ǽ� ����
	itoa(n.i, num, 2); //�Ǽ��� �ƴ� ������ 2������ ��ȯ
	printf("%10.4f -> %032s\n", n.f, num); //��Ģ������ �Ǽ��� ���� 2������ ��Ÿ���Ⱑ �������� �̿� ���� �����ϴ�
}