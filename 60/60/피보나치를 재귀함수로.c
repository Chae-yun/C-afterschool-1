#include <stdio.h>
#pragma warning(disable:4996)
void fibonacci(int x, int y, int num);
int main()
{
	int x = 1, y = 1, num;
	printf("입력받을 항의 개수 : ");
	scanf("%d", &num);
	printf("1, 1, ");
	fibonacci(x, y, num - 2);
}

void fibonacci(int x, int y, int num){
	int z;
	z = x + y;
	if (z < 0)
		return;
	if (num == 1){
		printf("%d\n", z);
		return;
	}
	printf("%d, ", z);
	x = y;
	y = z;
	num--;
	fibonacci(x, y, num);
}