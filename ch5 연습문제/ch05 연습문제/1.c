#include <stdio.h>
int main()
{
	/*
		int i = 1;
		while(i <= 100){
		if (i % 9 == 0)
			printf("%d  ", i);
		i++;
	}*/
	int i = 0;
	while ((i += 9) <= 100){
		printf("%d  ", i);
	}
}