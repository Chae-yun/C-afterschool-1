#include <stdio.h>
#pragma warning(disable:4996)
int main(){
	FILE *fp;
	char gana[30] = { "�����ٶ󸶹ٻ������īŸ����" };
	int num, res;
	fp = fopen("A.txt", "w+");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}
	fprintf(fp, "%s", gana);
	fclose(fp);

	fp = fopen("A.txt", "r");
	if (fp == NULL){
		printf("�Է����� ���� ����.\n");
		return 1;
	}
	printf("�о�� ��ŭ ���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &num);
	for (int i = 0; i < num * 2; i++){
		res = fscanf(fp, "%c", &gana[i]);
		if (res == EOF){
			printf("\n�Է��� ���ڰ� �ʹ� Ů�ϴ�!");
			break;
		}
		printf("%c", gana[i]);
	}
	printf("\n");
	fclose(fp);
	return 0;
}