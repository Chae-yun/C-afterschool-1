#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996)

struct info{
	char name[20];
	char tel[20];
};

enum{ QUIT, INPUT_DATA, SAVE_TEXT, SAVE_BINARY, LOAD_TEXT, LOAD_BINARY }; //열거형데이터타입

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
	int bDataInput = 0; //플래그변수
	int bTextSaved = 0;
	int bBinarySaved = 0;

	while (1){
		menu = GetMenu();
		if (menu == 0){
			printf("종료합니다.\n");
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
						printf("텍스트 파일 저장 실패\n");
				}
				else
					printf("먼저 이름과 전화번호를 입력하세요.\n");
				break;
			case SAVE_BINARY:
				if (bDataInput == 1){
					if (SaveAsBinary("a.dat", arr, 3) == 0)
						bBinarySaved = 1;
					else
						printf("바이너리 파일 저장 실패\n");
				}
				else
					printf("먼저 이름과 전화번호를 입력하세요.\n");
				break;
			case LOAD_TEXT:
				if (bDataInput != 1)
					printf("먼저 이름과 전화번호를 입력하세요.\n");
				else if (bTextSaved != 1)
					printf("먼저 텍스트 파일을 저장하세요.\n");
				else{
					if (LoadText("a.txt", arr, 3) != 0)
						printf("텍스트 파일 읽기 실패\n");
					else
						ShowList(arr, 3);
				}
				break;
			case LOAD_BINARY:
				if(bDataInput != 1)
					printf("먼저 이름과 전화번호를 입력하세요.\n");
				else if (bBinarySaved != 1)
					printf("먼저 바이너리 파일을 저장하세요.\n");
				else{
				if (LoadBinary("a.dat", arr, 3) != 0)
					printf("바이너리 파일 읽기 실패\n");
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
		printf("1. 이름과 전화번호 입력\n");
		printf("2. 텍스트 파일로 저장\n");
		printf("3. 바이너리 파일로 저장\n");
		printf("4. 텍스트 파일 읽기\n");
		printf("5. 바이너리 파일 읽기\n");
		printf("0. 종료\n");
		printf("-------------------------\n");
		printf("선택 : ");
		res = scanf("%d", &number);
		if (res != 1)
			printf("숫자를 입력하세요.\n");
		else{
			if (number >= 0 && number <= 5)
				break;
			else
				printf("0부터 5사이의 값을 입력하세요.\n");
		}
	}
	return number;
}

void InputData(struct info *arr, int size){
	for (int i = 0; i < size; i++){
		printf("이름 : ");
		scanf("%s", arr[i].name);
		printf("전화번호 : ");
		scanf("%s", arr[i].tel);
	}
}

int SaveAsText(char *fname, struct info *arr, int size){
	FILE *fp;
	fp = fopen(fname, "w");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
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
		printf("입력파일 개방 실패.\n");
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
		printf("출력파일 개방 실패.\n");
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
		printf("출력파일 개방 실패.\n");
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