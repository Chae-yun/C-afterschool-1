#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int sum = 0;
	int num;
	while (1) {
		printf("���ڸ� �Է��Ͻÿ� (����� ctrl + c) : ");
		if (scanf("%d", &num) == -1) //== EOF
			break;
		fflush(stdin);
		sum += num;
	}
	printf("�� ������ ���� %d�Դϴ�.\n", sum);
}