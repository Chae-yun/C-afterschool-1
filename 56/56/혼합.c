#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	char str[6][20];
	int num;
	fp = fopen("C.txt", "w");
	if (fp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("%d번째 문자열 : ", i + 1);
		scanf("%s", &str[i]);
		fflush(stdin);
		fprintf(fp, "%s  ", str[i]);
	}
	fclose(fp);

	fp = fopen("C.txt", "r");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}
	printf("읽어올 만큼 숫자를 입력하시오 : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++){
		fscanf(fp, "%s", &str[i]);
		printf("%s  ", str[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}