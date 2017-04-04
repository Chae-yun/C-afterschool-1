#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	char gana[30] = { "가나다라마바사아자차카타파하" };
	int num, res;
	fp = fopen("A.txt", "w+");
	if (fp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	fprintf(fp, "%s", gana);
	fclose(fp);

	fp = fopen("A.txt", "r");
	if (fp == NULL){
		printf("입력파일 개방 실패.\n");
		return 1;
	}
	printf("읽어올 만큼 숫자를 입력하시오 : ");
	scanf("%d", &num);
	for (int i = 0; i < num * 2; i++){
		res = fscanf(fp, "%c", &gana[i]);
		if (res == EOF){
			printf("\n입력한 숫자가 너무 큽니다!");
			break;
		}
		printf("%c", gana[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}