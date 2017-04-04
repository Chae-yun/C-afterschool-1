#include <stdio.h>
int main()
{
	int num = 1, sum = 0;
	while (num <= 100){
		if (num % 2 == 1){
			sum += num*num*-1;
		}
		else{
			sum += num*num;
		}
		num++;
	}
	printf("합은 %d이다.\n", sum);
}