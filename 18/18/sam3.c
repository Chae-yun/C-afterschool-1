#include<stdio.h>
int GetFactorial(int a){
	int fact = 1;
	for (int i = 1; i <= a; i++){
		fact *= i;
	}
	return fact;
}
int GetSum(int a){
	int sum = 0;
	for (int i = 1; i <= a; i++){
		sum += i;
	}
	return sum;
}
int main()
{
	int result1, result2;
	result1 = GetFactorial(10);
	printf("10 ���丮�� = %d\n", result1);
	result2 = GetSum(10);
	printf("1~10�� �հ� = %d\n", result2);
	return 0;
}