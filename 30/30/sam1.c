#include<stdio.h>

int main(int argc, char* argv[]) //�Ű������� ���� main�Լ�
{
	int i; 
	printf("argc = %d\n", argc);
	for (i = 0; i < argc; i++) //����� ���� ���
		printf("argv[%d] = %s\n", i, argv[i]); //����� ���� ���
	return 0;
}