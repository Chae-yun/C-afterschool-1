#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)
int main()
{
	int dan, y=1;
	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &dan);
	while (y < 10){
		printf("%2d * %2d = %2d\n", dan, y, dan*y);
		y++;
	}
}