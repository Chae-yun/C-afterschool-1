#include <stdio.h>
int main()
{
	int x = 2, y = 0;
	printf("    %d´Ü\n", x);
loop:
	y++;
	printf("%d * %d = %d\n", x, y, x*y);
	if (y < 9)
		goto loop;

	y = 0;
	x++;
	if (x < 10){
		printf("    %d´Ü\n", x);
		goto loop;
	}
}