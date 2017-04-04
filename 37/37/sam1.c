#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

struct info{
	char name[20];
	char tel[20];
};

enum{ QUIT, INPUT_DATA, SAVE_TEXT, SAVE_BINARY, LOAD_TEXT, LOAD_BINARY }; //������������Ÿ��

int GetMenu();
void InputData(struct info *arr, int size);
int SaveAsText(char *fname, struct info *arr, int size);
int SaveAsBinary(char *fname, struct info *arr, int size);
int LoadText(char *fname, struct info *arr, int size);
int LoadBinary(char *fname, struct info *arr, int size);
void ShowList(struct info *arr, int size);

int main()
{
	struct info arr[3];
	int menu;
	int bDataInput = 0; //�÷��׺���
	int bTextSaved = 0;
	int bBinarySaved = 0;

	while (1){
		menu = GetMenu();
		if (menu == 0){
			printf("�����մϴ�.\n");
			break;
		}
		switch (menu){
			case INPUT_DATA:
				InputData(arr, 3);
				bDataInput = 1; break;
			case SAVE_TEXT:
				if (bDataInput == 1){
					if (SaveAsText("a.txt", arr, 3) == 0)
						bTextSaved = 1;
					else
						printf("�ؽ�Ʈ ���� ���� ����\n");
				}
				else
					printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
				break;
			case SAVE_BINARY:
				if (bDataInput == 1){
					if (SaveAsBinary("a.dat", arr, 3) == 0)
						bBinarySaved = 1;
					else
						printf("���̳ʸ� ���� ���� ����\n");
				}
				else
					printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
				break;
			case LOAD_TEXT:
				if (bDataInput != 1)
					printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
				else if (bTextSaved != 1)
					printf("���� �ؽ�Ʈ ������ �����ϼ���.\n");
				else{
					if (LoadText("a.txt", arr, 3) != 0)
						printf("�ؽ�Ʈ ���� �б� ����\n");
					else
						ShowList(arr, 3);
				}
				break;
			case LOAD_BINARY:
				if(bDataInput != 1)
					printf("���� �̸��� ��ȭ��ȣ�� �Է��ϼ���.\n");
				else if (bBinarySaved != 1)
					printf("���� ���̳ʸ� ������ �����ϼ���.\n");
				else{
				if (LoadBinary("a.dat", arr, 3) != 0)
					printf("���̳ʸ� ���� �б� ����\n");
				else
					ShowList(arr, 3);
				}
				break;
		}
	}
}

int GetMenu(){
	int number, res;
	while (1){
		printf("-------------------------\n");
		printf("1. �̸��� ��ȭ��ȣ �Է�\n");
		printf("2. �ؽ�Ʈ ���Ϸ� ����\n");
		printf("3. ���̳ʸ� ���Ϸ� ����\n");
		printf("4. �ؽ�Ʈ ���� �б�\n");
		printf("5. ���̳ʸ� ���� �б�\n");
		printf("0. ����\n");
		printf("-------------------------\n");
		printf("���� : ");
		res = scanf("%d", &number);
		if (res != 1)
			printf("���ڸ� �Է��ϼ���.\n");
		else{
			if (number >= 0 && number <= 5)
				break;
			else
				printf("0���� 5������ ���� �Է��ϼ���.\n");
		}
	}
	return number;
}

void InputData(struct info *arr, int size){
	for (int i = 0; i < size; i++){
		printf("�̸� : ");
		scanf("%s", arr[i].name);
		printf("��ȭ��ȣ : ");
		scanf("%s", arr[i].tel);
	}
}

int SaveAsText(char *fname, struct info *arr, int size){
	FILE *fp;
	fp = fopen(fname, "w");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}
	for (int i = 0; i < size; i++)
		fprintf(fp, "%s %s\n", arr[i].name, arr[i].tel);
	fclose(fp);
	return 0;
}

int SaveAsBinary(char *fname, struct info *arr, int size){
	FILE *fp;
	fp = fopen(fname, "wb");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}
	fwrite(arr, sizeof(struct info), size, fp);
	fclose(fp);
	return 0;
}

int LoadText(char *fname, struct info *arr, int size){
	FILE *fp;
	fp = fopen(fname, "r");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}
	for (int i = 0; i < size; i++){
		fscanf(fp, "%s %s", arr[i].name, arr[i].tel);
	}
	fclose(fp);
	return 0;
}

int LoadBinary(char *fname, struct info *arr, int size){
	FILE *fp;
	fp = fopen(fname, "rb");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}
	fread(arr, sizeof(struct info), size, fp);
	fclose(fp);
	return 0;
}

void ShowList(struct info *arr, int size){
	for (int i = 0; i < size; i++)
		printf("%s %s\n", arr[i].name, arr[i].tel);
}