#include <stdio.h>
int main()
{
	int count = 1;
	while (1){
		printf("%d ", count);
		count++;
		if (count > 10)
			break;
	}
}