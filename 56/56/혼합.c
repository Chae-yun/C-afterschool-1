#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	char str[6][20];
	int num;
	fp = fopen("C.txt", "w");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("%d��° ���ڿ� : ", i + 1);
		scanf("%s", &str[i]);
		fflush(stdin);
		fprintf(fp, "%s  ", str[i]);
	}
	fclose(fp);

	fp = fopen("C.txt", "r");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}
	printf("�о�� ��ŭ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++){
		fscanf(fp, "%s", &str[i]);
		printf("%s  ", str[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}