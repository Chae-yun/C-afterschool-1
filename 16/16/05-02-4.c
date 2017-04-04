#include <stdio.h>
int main()
{
	int x = 5820703, count = 0;
	while (1){
		x /= 10;
		count++;
		if (!x)
			break;
	}
	printf("%dÀÚ¸®\n", count);
}