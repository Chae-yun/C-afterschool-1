#include <stdio.h>
int main()
{
	int sum = 0, i = 0;
	do{
		i += 2;
		sum += i * i;
	} while (sum <= 5000);
	printf("n의 값은 %d이고, 그 때의 합은 %d이다.", i, sum);
}