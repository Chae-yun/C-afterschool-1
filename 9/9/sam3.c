#include <stdio.h>
int main()
{
	int a = 1, b = 2, c = 3;
	int result;
	result = a + b * c % 2;
	printf("result=%d\n", result);
	result = a > b || c > 0;
	printf("result=%d\n", result);
	result = a > b || c > 0 && b > c;
	printf("result=%d\n", result);
	result = ++a * b--;
	printf("result=%d\n", result);
	result = a = b = c; //뒤에서 부터 간다. + 나 - 같은거는 앞에서 부터
	printf("result=%d\n", result);
	return 0;
}