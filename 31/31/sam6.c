#include<stdio.h>
#pragma warning(disable:4996)

int GetFactorial(int n);

int main()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);
	printf("%d! = %d\n", num, GetFactorial(num));
	return 0;
}

int GetFactorial(int n)
{
	if (n <= 1)
		return 1;
	return n*GetFactorial(n - 1);
}