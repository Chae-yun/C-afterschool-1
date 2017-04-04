#include <stdio.h>
int main()
{
	int sign = 1;
	double sum = 0;
	for (int i = 1; i <= 10000; i++){
		if (i % 3 == 0){
			sign = -1;
		}
		else{
			sign = 1;
		}
		sum += (1. / i) * sign;
	}
	printf("10000항 까지 계산하면 %lf 이다.\n", sum);
}