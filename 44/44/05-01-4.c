#include <stdio.h>
int main()
{
	int number = 1;
	double sum = 0.0, sign = 1.0; //sign �� ��ȣ�� �ٲ��ֱ� ����.
	while (sum < 0.69){
		sum += sign*(double)number / (double)(number + 1);
		sign = -sign;
		number++;
	}
	printf("x = %d, sum = %f\n", number, sum);
	/*int number = 1;
	int sum = 0;
	while (sum < 100){
		sum += number*(number + 1);
		number++;
	}
	printf("x = %d, sum = %d\n", number, sum);*/
}