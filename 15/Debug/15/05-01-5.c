#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	printf("%d ", x);
	while (x > 1){
		if (x % 2 == 0)
			x /= 2;
		else
			x = x * 3 + 1;
		printf("%d  ", x);
	}
}