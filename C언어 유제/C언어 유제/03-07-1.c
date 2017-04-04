#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int x;
	printf("Á¡¼ö : ");
	scanf("%d", &x);
	switch (x / 5){
	case 20:
	case 19:
		printf("A+\n");
		break;
	case 18:
		printf("A\n");
		break;
	case 17:
		printf("B+\n");
		break;
	case 16:
		printf("B\n");
		break;
	case 15:
		printf("C+\n");
		break;
	case 14:
		printf("C\n");
		break;
	case 13:
		printf("D+\n");
		break;
	case 12:
		printf("D\n");
		break;
	default:
		printf("F\n");
	}
}