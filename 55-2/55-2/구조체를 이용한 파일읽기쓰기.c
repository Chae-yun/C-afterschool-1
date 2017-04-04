#include <stdio.h>
#pragma warning(disable:4996)
typedef struct info{
	char name[20];
	char tel[20];
}INFO;
int main(){
	FILE *fp;
	INFO people[5];
	char name[20], tel[20];
	int res;
	fp = fopen("C.txt", "w");
	if (fp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("(%d) 이름과 전화번호를 입력하시오 : ", i + 1);
		scanf("%s %s", people[i].name, people[i].tel);
		fprintf(fp, "%s %s\n", people[i].name, people[i].tel);
	}
	fclose(fp);

	fp = fopen("C.txt", "r");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}
	printf("\n다시 읽어오기\n");
	for (int i = 0; i < 5; i++){
		res = fscanf(fp, "%s%s", people[i].name, people[i].tel);
		if (res == EOF) break;
		printf("%s %s\n", people[i].name, people[i].tel);
	}
	fclose(fp);
	return 0;
}