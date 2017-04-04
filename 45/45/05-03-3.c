#include <stdio.h>
int main()
{
	int x, y;
	x = 1;
	while (x <= 10){
		y = 1;
		while (y <= x){
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
}