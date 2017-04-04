#include <stdio.h>
int main()
{
	int num = 1, answer = 0, sign = 1;
	while (num <= 100){
		sign = -sign;
		answer = answer + sign*num*num;
		num++;
	}
	printf("%d\n", answer);
}