#include <stdio.h>
int main()
{
	int sum = 0, i = 0;
	do{
		i += 2;
		sum += i * i;
	} while (sum <= 5000);
	printf("n�� ���� %d�̰�, �� ���� ���� %d�̴�.", i, sum);
}