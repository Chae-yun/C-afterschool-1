#include <stdio.h>
int main()
{
	char x = 56, y = 49, z; //56 : 00111000, 49 : 00110001
	z = x & y;
	printf("%d\n", z);
	z = x | y;
	printf("%d\n", z);
	z = x ^ y;
	printf("%d\n", z);
	z = ~x; //~00111000=11000111=-57
	printf("%d\n", z);
}