#include <stdio.h>
int main()
{
	int sum = 0, i = 0, count = 0;
	while (sum <= 5000){
		i++;
		count++;
		if (count % 3 == 0)
			sum += i * i * -1;
		else
			sum += i * i;
	}
	printf("x�� ���� %d�̰�, �� ���� ���� %d�̴�.", i, sum);
}