#include <stdio.h>
int main()
{
	int i = 1, count = 0;
	while (i <= 100){
		if (i % 2 == 0 || i % 3 == 0){
			printf("%d\t", i);
			count++;
		}
		i++;
		if (count == 10){
			printf("\n");
			count = 0;
		}
	}
}