#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x, sum = 0;
	printf("Press Ctrl-Z to exit.\n");
	do{
		printf("input data : ");
		if (scanf("%d", &x) == EOF) //Ctrl-Z�� �ԷµǸ� ������ �����.
			break;
		sum += x;
	} while (1);
	printf("sum = %d\n", sum);
}