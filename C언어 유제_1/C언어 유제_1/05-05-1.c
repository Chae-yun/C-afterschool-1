#include <stdio.h>
int main()
{
	int gob = 1, i;
	for (i = 1; gob < 3315; i+=2){
		gob = i * (i + 2) * (i + 4);
	}
	printf("%d * %d * %d  = %d\n", i - 2, i, i + 2, gob);
}