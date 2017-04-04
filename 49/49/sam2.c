#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int choice;
	printf("원하는 숫자를 입력하세요(1이상) : ");
	scanf("%d", &choice);
	for (int x = 1; x <= choice * 2 - 1; x++){
		for (int y = 1; y <= x; y++){
			if (x <= choice)
				printf("%*s", choice - x, "* ");
			else

		}
		printf("\n");
	}
}