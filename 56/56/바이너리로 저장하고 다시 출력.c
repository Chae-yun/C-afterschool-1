#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	int num;
	int res;
	fp = fopen("B.dat", "wb");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("%d��° ���� : ", i + 1);
		scanf("%d", &num);
		fwrite(&num, 4, 1, fp);
	}
	fclose(fp);

	fp = fopen("B.dat", "rb");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}
	printf("�ٽ� �о����\n");
	for (int i = 0; i < 5; i++){
		fread(&num, 4, 1, fp);
		printf("%d  ", num);
	}
	fclose(fp);
	return 0;
}