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
	printf("10000�� ���� ����ϸ� %lf �̴�.\n", sum);
}