#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct login_info{
	char id[20];
	char passwd[20];
};

int main()
{
	FILE *fp;
	struct login_info *arr = NULL;
	int data, count = 0;
	char id[20], passwd[20], answer;

	fp = fopen("d.txt", "r");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}

	fscanf(fp, "%d", &data);
	printf("�н����� ������ �о����ϴ�. %d���� ����� ������ �ֽ��ϴ�.\n", data);

	arr = malloc(sizeof(struct login_info)*data);

	while (1){
		count = 0;
		printf("ID�� �Է��ϼ��� : ");
		scanf("%s", id);
		printf("�н����带 �Է��ϼ��� : ");
		scanf("%s", passwd);
		for (int i = 0; i < data; i++){
			fscanf(fp, "%s %s", arr[i].id, arr[i].passwd);
			if (strcmp(arr[i].id, id) == 0 && strcmp(arr[i].passwd, passwd) == 0)
				count = 1;
		}
		if (count == 1)
			printf("LOGIN OK!\n");
		else
			printf("LOGIN FAILED!\n");
		fflush(stdin);
		printf("��� �Ͻðڽ��ϱ�? (Y/N) : ");
		scanf("%c", &answer);
		if (answer == 'n' || answer == 'N')
			break;
	}
	fclose(fp);
}