#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int choice;
	printf("���ϴ� ���ڸ� �Է��ϼ���(1�̻�) : ");
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