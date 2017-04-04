#include <stdio.h>
#define DEBUG 1 //0 을 넣으면 sum=55만 나온다. 왜??
int main()
{
	int i, sum = 0;
	for (i = 1; i <= 10; i++){
		sum += i;
		#if DEBUG
			printf("%d ", sum);
		#endif
	}
	printf("sum=%d\n", sum);
}