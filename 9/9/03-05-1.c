#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	if (x < 0)
	{
		x = -x;
	}
	printf("%d\n", x);
}