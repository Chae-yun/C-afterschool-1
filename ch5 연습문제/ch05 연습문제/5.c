#include <stdio.h>
int main()
{
	int sum = 0, i = 1;
	while(i <= 100){
		if (i % 2 == 0)
			sum += i * i;
		else
			sum += i * i * -1;
		i++;
	}
	printf("%d\n", sum);
}