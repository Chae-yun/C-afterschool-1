#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num, NUM, sum = 0, pacto = 1;
	while (1){
		printf("1. Ȧ�� ¦�� Ȯ��\n2. N������ �հ� ���ϱ�\n3. N���丮�� ���ϱ�(N!)\n0. ����\n���� : ");
		scanf("%d", &num);
		if (num == 0){
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
		switch (num){
		case 1:
			printf("������ �Է��Ͻÿ� : ");
			scanf("%d", &NUM);

			if (NUM % 2 == 0){
				printf("%d�� ¦���Դϴ�.\n\n", NUM);
			}
			else{
				printf("%d�� Ȧ���Դϴ�.\n\n", NUM);
			}
			break;

		case 2:
			printf("������ �Է��Ͻÿ� : ");
			scanf("%d", &NUM);

			sum = 0;
			for (int count = 1; count <= NUM; count++){
				sum += count;
			}
			printf("1���� %d������ ���� %d�Դϴ�.\n\n", NUM, sum);
			break;

		case 3:
			printf("������ �Է��Ͻÿ� : ");
			scanf("%d", &NUM);

			for (int i = NUM; i >= 1; i--){
				pacto *= i;
			}
			if (NUM == 0){
				printf("0�� ���丮���� 1�Դϴ�.\n\n");
			}
			else{
				printf("%d�� ���丮���� %d�Դϴ�.\n\n", NUM, pacto);
			}
			break;
		}
	}
}