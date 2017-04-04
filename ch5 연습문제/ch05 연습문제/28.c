#include <stdio.h>
int main()
{
	int x = 1, y = 1;
	while (x <= 10){
		while (y <= 10 - x){
			printf(" ");
			y++;
		}
		y = 1;
		while (y <= 19 - 2 * (10 - x)){
			printf("*");
			y++;
		}
		y = 1;
		x++;
		printf("\n");
	}
	x = 1;

	while (x <= 5){
		while (y <= 8){
			printf(" ");
			y++;
		}
		y = 1;
		while (y <= 3){
			printf("*");
			y++;
		}
		y = 1;
		x++;
		printf("\n");
	}
}
