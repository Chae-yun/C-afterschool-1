#include <stdio.h>
int main()
{
	int i = 100;
	while (i >= 1){
		printf("%d\t", i);
		if (i % 10 == 1)
			printf("\n");
		i--;
	}
}