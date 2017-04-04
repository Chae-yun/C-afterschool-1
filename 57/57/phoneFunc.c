#include "common.h"
#include "phoneFunc.h"

int SelectMenu(){
	int choice;
	printf("--------메뉴--------\n");
	printf("1. 전화번호 입력\n");
	printf("2. 전체 정보 출력\n");
	printf("3. 전화번호 검색\n");
	printf("4. 전화번호 삭제\n");
	printf("0. 종료\n\n");
	printf("선택하시오 : ");
	scanf("%d", &choice);
	if (choice < 0 || choice > 4){
		printf("\n잘못된 번호입니다.\n");
		return 0;
	}
	return choice;
}

void PrintData(PHONEDATA *std, int cnt){
	printf("\n--------정보--------\n");
	for (int i = 0; i < cnt; i++)
		printf("%s %s\n", std[i].name, std[i].phoneNum);
	printf("\n");
}

int AddData(PHONEDATA *std, int totalCnt, int pCurCnt){
	int res;
	if (totalCnt == pCurCnt){
		printf("\n가득 찼습니다.\n\n");
		return 0;
	}
	else{
		printf("이름을 입력하세요:");
		res = scanf("%s", std[pCurCnt].name);
		fflush(stdin);
		printf("전화번호를 입력하세요:");
		scanf("%s", std[pCurCnt].phoneNum);
		printf("\n");
		return 1;
	}
}

int Search(PHONEDATA *std, int cnt){
	char name[20];
	printf("\n검색할 사람의 이름을 입력하시오 : ");
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
	fputs("삭제하실 이름을 입력하시오 : ", stdout);
	fflush(stdin);
	gets(delName);
	
	for (i = 0; i < cnt; i++){
		if (!strcmp(std[i].name, delName)){
			for (j = i; j < cnt - 1; j++){
				std[j] = std[j + 1];
			}
			puts("삭제가 완료되었습니다.\n");
			return;
		}
	}
	puts("찾는 이름의 데이터가 존재하지 않습니다.");
}