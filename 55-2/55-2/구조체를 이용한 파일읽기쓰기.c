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
		printf("������� ���� ����.\n");
		return 1;
	}
	for (int i = 0; i < 5; i++){
		printf("(%d) �̸��� ��ȭ��ȣ�� �Է��Ͻÿ� : ", i + 1);
		scanf("%s %s", people[i].name, people[i].tel);
		fprintf(fp, "%s %s\n", people[i].name, people[i].tel);
	}
	fclose(fp);

	fp = fopen("C.txt", "r");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}
	printf("\n�ٽ� �о����\n");
	for (int i = 0; i < 5; i++){
		res = fscanf(fp, "%s%s", people[i].name, people[i].tel);
		if (res == EOF) break;
		printf("%s %s\n", people[i].name, people[i].tel);
	}
	fclose(fp);
	return 0;
}