#include <stdio.h>
int main()
{
	int i = 1, sum=0;
	/*while (i<=10)
	{
		printf("%d ", i);
		i++;
	}
	printf("\n");
	i = 1;
	while (i <= 10)
		sum += i++;
	printf("sum=%d\n", sum);*/
	while (i <= 10)
	{
		sum = sum + i;
		printf("�ڿ���=%d\n", i);
		i++;
	}
	printf("1���� 10������ �� = %d\n", sum);
}