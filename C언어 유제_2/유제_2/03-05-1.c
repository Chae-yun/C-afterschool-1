#include<stdio.h>
#include<math.h>
#pragma warning (disable:4996)

int main()
{
	int num;
	printf("�Ǽ��� �Է����ּ��� : ");
	scanf("%d", &num);

	if (num < 0)
	{
		num *= -1;
		printf("����->��� : %d\n", num);
	}

	num = sqrt(num);
	printf("������ : %d\n", num);
}