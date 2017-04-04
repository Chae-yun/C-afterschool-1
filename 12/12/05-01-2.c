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
		printf("자연수=%d\n", i);
		i++;
	}
	printf("1부터 10까지의 합 = %d\n", sum);
}