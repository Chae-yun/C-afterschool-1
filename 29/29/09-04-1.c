#include<stdio.h>

typedef union int_or_float{
	int i;
	float f;
}number; //����ü

int main()
{
	number n;
	n.i = 1234; //���� �� ����
	printf("i : %10d, f : %16.10e\n", n.i, n.f); //���� ���� ��Ȯ�� ���� �����ش�
	n.f = 1234.0f; //�Ǽ� �� ����
	printf("i : %10d, f : %16.10e\n", n.i, n.f); //�Ǽ� ���� ��Ȯ�� ���� �����ش�
}