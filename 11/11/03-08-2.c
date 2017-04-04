#include <stdio.h>
int main()
{
	int x = 2, y=0;
	printf("    %d´Ü\n",x);
loop:
	y++;
	if (y < 10){
		printf("%d * %d = %2d\n", x, y, x*y);
		goto loop;
	}
	x++;
	if (x < 10){
		printf("    %d´Ü\n", x);
		y = 1;
	}
loop_1:
	if (y < 10){
		printf("%d * %d = %2d\n", x, y, x*y);
		goto loop;
		goto loop_1;
	}
}