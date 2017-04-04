#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	char choice;
	while (1){
		printf("정수를 하나 입력하시오 : ");
		scanf("%d", &num);
		if (num % 2 == 0)
			printf("짝수입니다.\n\n");
		else
			printf("홀수입니다.\n\n");
		printf("계속하시겠습니까?(y/n) : ");
		fflush(stdin);
		scanf("%c", &choice);
		if (choice == 'n' || choice == 'N')
			break;
		printf("\n");
	}
}