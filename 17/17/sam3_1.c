#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, NUM, sum = 0, pacto = 1;
	while (1){
		printf("1. 홀수 짝수 확인\n2. N까지의 합계 구하기\n3. N팩토리얼 구하기(N!)\n0. 종료\n선택 : ");
		scanf("%d", &num);
		if (num == 0){
			printf("프로그램을 종료합니다.\n");
			break;
		}
		switch (num){
		case 1:
			printf("정수를 입력하시오 : ");
			scanf("%d", &NUM);

			if (NUM % 2 == 0){
				printf("%d는 짝수입니다.\n\n", NUM);
			}
			else{
				printf("%d는 홀수입니다.\n\n", NUM);
			}
			break;

		case 2:
			printf("정수를 입력하시오 : ");
			scanf("%d", &NUM);

			sum = 0;
			for (int count = 1; count <= NUM; count++){
				sum += count;
			}
			printf("1부터 %d까지의 합은 %d입니다.\n\n", NUM, sum);
			break;

		case 3:
			printf("정수를 입력하시오 : ");
			scanf("%d", &NUM);

			for (int i = NUM; i >= 1; i--){
				pacto *= i;
			}
			if (NUM == 0){
				printf("0의 팩토리얼은 1입니다.\n\n");
			}
			else{
				printf("%d의 팩토리얼은 %d입니다.\n\n", NUM, pacto);
			}
			break;
		}
	}
}