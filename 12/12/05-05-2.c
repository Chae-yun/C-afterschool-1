#include <stdio.h>
int main()
{
	int count, sum;
	for (count = 1, sum = 0; count <= 10; count++)
	{
		sum += count;
		printf("%d ", count);
	}
	printf("sum=%d\n", sum);
}