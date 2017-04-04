#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int choice, count = 1, num = 0;
	printf("원하는 숫자를 입력하세요(1이상) : ");
	scanf("%d", &choice);
	while (count <= choice){
		if (num != 0){
			if (num == 3 || num == 6 || num == 9){
				printf("짝");
				num = count % 10;
				if (num == 3 || num == 6 || num == 9)
					printf("짝\n");
				else
					printf("\n");
			}
			else{
				num = count % 10;
				if (num == 3 || num == 6 || num == 9)
					printf("짝\n");
				else if (count % 10 == 0)
					printf("만세\n");
				else
					printf("%d\n", count);
			}
		}
		else{
			num = count;
			if (num == 3 || num == 6 || num == 9)
				printf("짝\n");
			else if (count % 10 == 0)
				printf("만세\n");
			else
				printf("%d\n", count);
		}
		count++;
		num = count / 10;
	}
}