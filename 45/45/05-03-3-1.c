#include <stdio.h>
int main()
{
	int x, y;
	x = 1;
	while (x <= 10){
		y = 1;
		while (y <= 10 - x){
			printf(" ");
			y++;
		}
		y = 1;
		while (y <= x * 2 - 1){
			printf("*");
			y++;
		}
		printf("\n");
		x++;
	}
}