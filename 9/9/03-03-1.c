#include <stdio.h>
int main()
{
	int x = 56, y; //56=00111000
	y = x << 2; //y=11100000=224
	printf("%d\n", y);
	y = x >> 2; //y=00001110=14
	printf("%d\n", y);
	x = -56; //-56=11111111 11001000
	y = x << 2; //y=11111111 00100000=-224
	printf("%d\n", y);
	y = x >> 2; //y=11111111 11110010=-14
	printf("%d\n", y);
}