#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int choice, count = 1, num = 0;
	printf("���ϴ� ���ڸ� �Է��ϼ���(1�̻�) : ");
	scanf("%d", &choice);
	while (count <= choice){
		if (num != 0){
			if (num == 3 || num == 6 || num == 9){
				printf("¦");
				num = count % 10;
				if (num == 3 || num == 6 || num == 9)
					printf("¦\n");
				else
					printf("\n");
			}
			else{
				num = count % 10;
				if (num == 3 || num == 6 || num == 9)
					printf("¦\n");
				else if (count % 10 == 0)
					printf("����\n");
				else
					printf("%d\n", count);
			}
		}
		else{
			num = count;
			if (num == 3 || num == 6 || num == 9)
				printf("¦\n");
			else if (count % 10 == 0)
				printf("����\n");
			else
				printf("%d\n", count);
		}
		count++;
		num = count / 10;
	}
}