#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int number, check, temp;
	printf("�й��� �ĺ���ȣ�� �Է��Ͻÿ� : ");
	scanf("%d %d", &number, &check);
	number *= 3;
	while (number >= 10){
		for (temp = 0; number > 0; number /= 10)
			temp += number % 10;
		number = temp;
	}
	if (number == check)
		printf("������ �й��Դϴ�.\n");
	else
		printf("������ �й��� �ƴմϴ�.\n");
}