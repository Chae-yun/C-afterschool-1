#include <stdio.h>
int main()
{
	int count;
	int value1, value2;
	float temperature = 10.5f;
	count = 10;
	value1 = ++count;
	printf("value1 = %d, count = %d\n", value1, count);
	count = 10;
	value2 = count++;
	printf("value2 = %d, count = %d\n", value2, count);
}