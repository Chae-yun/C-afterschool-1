#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	int num[6];
	int res;
	fp = fopen("B.txt", "w");
	if (fp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("%d번째 정수 : ", i + 1);
		scanf("%d", &num[i]);
		fprintf(fp, "%d  ", num[i]);
	}
	fclose(fp);

	fp = fopen("B.txt", "r");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}
	printf("다시 읽어오기\n");
	for (int i = 0; i < 5; i++){
		fscanf(fp, "%d", &num[i]);
		printf("%d  ", num[i]);
	}
	fclose(fp);
	return 0;
}