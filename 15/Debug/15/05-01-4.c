#include <stdio.h>
int main()
{
	int number = 1;
	double sum = 0.0, sign = 1.0; //sign 은 부호를 바꿔주기 위함.
	while (sum < 0.69){
		sum += sign*(double)number / (double)(number + 1);
		sign = -sign;
		number++;
	}
	printf("x = %d, sum = %f\n", number, sum);
}