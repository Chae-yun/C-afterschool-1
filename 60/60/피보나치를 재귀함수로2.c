#include <stdio.h>
#pragma warning(disable:4996)
int fibonacci(int);
int main()
{
	int num;
	printf("�Է¹��� ���� ���� : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
		printf("%d ", fibonacci(i));
}

int fibonacci(int num){
	if (num <= 0)
		return 0;
	else if (num == 1)
		return 1;
	return fibonacci(num - 2) + fibonacci(num - 1);
}