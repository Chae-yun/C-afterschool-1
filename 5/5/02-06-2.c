#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char string[100];
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", string);
	printf("�Էµ� ���ڿ� = %s\n", string);
	fflush(stdin);//����� ���� ��� ������
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%[^\n]", string);//���� �������� ������ �����ض�
	printf("�Էµ� ���ڿ� = %s\n", string);
}
