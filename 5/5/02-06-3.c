#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char address[50], zipcode[20];
	printf("�����ȣ�� �ּ� �Է� : ");
	scanf("%[0123456789-]%*c%[^\n]", zipcode, address); //���ֱ�����(����)�ϱ� �ص� ������ ����� ���·� ��µ�.
	//[012345678-]�� ����? 0~9���ڶ� -�� ���� �ִ�?
	printf("�����ȣ : %s\n�ּ� : %s\n", zipcode, address);
}