#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	int num;
	int res;
	fp = fopen("B.dat", "wb");
	if (fp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("%d번째 정수 : ", i + 1);
		scanf("%d", &num);
		fwrite(&num, 4, 1, fp);
	}
	fclose(fp);

	fp = fopen("B.dat", "rb");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}
	printf("다시 읽어오기\n");
	for (int i = 0; i < 5; i++){
		fread(&num, 4, 1, fp);
		printf("%d  ", num);
	}
	fclose(fp);
	return 0;
}