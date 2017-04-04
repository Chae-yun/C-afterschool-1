#include<stdio.h>
int main()
{
	int x, y;
	for (x = -10; x < 10; x++){
		for (y = -10; y < 10; y++){
			if (x*x + y*y < 25){
				printf("(%d,%d)", x, y);
			}
		}
	}
	printf("\n");
}