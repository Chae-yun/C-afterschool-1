#include <stdio.h>
int main()
{
	int sum = 0, i = 1;
	while(i <= 100){
		sum += 2 * i * i + 5 * i;
		i++;
	}
	printf("%d", sum);
}