#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *x;
	x = (int *)malloc(sizeof(int)); //�������� �޸𸮸� �Ҵ��Ͽ� �����͸� x�� ����
	//sizeof(int)�� sizeof(4)�� ����.
	*x = 123; //������ ������ �� ����
	printf("x�� ����Ű�� ���� �� : %d\n", *x); // �����Ͱ� ����Ű�� ���� �� ���
	free(x); //�Ҵ�� �޸𸮸� OS�� ��ȯ�Ѵ�.
}