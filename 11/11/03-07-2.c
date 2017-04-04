#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("Á¡¼ö : ");
	scanf("%d", &x);
	switch (x / 10){
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}
}