#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	/*int i = 0;
	char answer[20];
	char fruits[][20] = { "apple", "greengrape", "dragonfruit", "orange", "melon" };
	printf("���� �����ϴ� ������ ���纸�ÿ� : ");
	gets(answer);
	while (1){
		if (strcmp(answer, fruits[i]) == 0){
			printf("����!!\n");
			break;
		}
		else
			i++;
	} �ƴ� �� �Է��ϸ� �ٽ� �ȹް� ����*/
	int i = 0;
	char answer[20];
	char fruits[][20] = { "apple", "greengrape", "dragonfruit", "orange", "melon" };
	printf("���� �����ϴ� ������ ���纸�ÿ� : ");
	gets(answer);
	while (1){
		if (strcmp(answer, fruits[i]) == 0){
			printf("����!!\n");
			break;
		}
		else
			i++;
		if (i == 4){
			if (strcmp(answer, fruits[i]) == 0){
				printf("����!!\n");
				break;
			}
			else{
				printf("��!!\n�ٽ� ���� �����ϴ� ������ ���纸�ÿ� : ");
				i = 0;
				gets(answer);
			}
		}
	}
}