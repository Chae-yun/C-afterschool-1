#include "common.h"
#include "phoneFunc.h"

int SelectMenu(){
	int choice;
	printf("--------�޴�--------\n");
	printf("1. ��ȭ��ȣ �Է�\n");
	printf("2. ��ü ���� ���\n");
	printf("3. ��ȭ��ȣ �˻�\n");
	printf("4. ��ȭ��ȣ ����\n");
	printf("0. ����\n\n");
	printf("�����Ͻÿ� : ");
	scanf("%d", &choice);
	if (choice < 0 || choice > 4){
		printf("\n�߸��� ��ȣ�Դϴ�.\n");
		return 0;
	}
	return choice;
}

void PrintData(PHONEDATA *std, int cnt){
	printf("\n--------����--------\n");
	for (int i = 0; i < cnt; i++)
		printf("%s %s\n", std[i].name, std[i].phoneNum);
	printf("\n");
}

int AddData(PHONEDATA *std, int totalCnt, int pCurCnt){
	int res;
	if (totalCnt == pCurCnt){
		printf("\n���� á���ϴ�.\n\n");
		return 0;
	}
	else{
		printf("�̸��� �Է��ϼ���:");
		res = scanf("%s", std[pCurCnt].name);
		fflush(stdin);
		printf("��ȭ��ȣ�� �Է��ϼ���:");
		scanf("%s", std[pCurCnt].phoneNum);
		printf("\n");
		return 1;
	}
}

int Search(PHONEDATA *std, int cnt){
	char name[20];
	printf("\n�˻��� ����� �̸��� �Է��Ͻÿ� : ");
	scanf("%s", name);
	for (int i = 0; i < cnt; i++){
		if (!strcmp(std[i].name, name)){
			printf("%s %s\n\n", std[i].name, std[i].phoneNum);
			return 1;
		}
	}
	return 0;
}

void DeletePhoneData(PHONEDATA *std, int cnt){
	int i, j;
	char delName[20];
	fputs("�����Ͻ� �̸��� �Է��Ͻÿ� : ", stdout);
	fflush(stdin);
	gets(delName);
	
	for (i = 0; i < cnt; i++){
		if (!strcmp(std[i].name, delName)){
			for (j = i; j < cnt - 1; j++){
				std[j] = std[j + 1];
			}
			puts("������ �Ϸ�Ǿ����ϴ�.\n");
			return;
		}
	}
	puts("ã�� �̸��� �����Ͱ� �������� �ʽ��ϴ�.");
}