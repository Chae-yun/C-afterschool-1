#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)
typedef struct weather{
	int day;
	char province[10];
	char ampm;
	char weath[100];
}WEATHER;
int main()
{
	FILE *fp;
	WEATHER d;
	int i = 0, res, day;
	char garbage[150];
	fp = fopen("D.txt", "w");
	while (1){
		printf("������ �ϱ⿹���� ��¥ (�� : 20160114) : ");
		res = scanf("%d", &d.day);
		if (res == EOF){
			printf("\n�ϱ⿹�� ������ �����մϴ�.\n\n");
			break;
		}
		printf("������ �ϱ⿹���� ���� : ");
		scanf("%s", d.province);
		fflush(stdin);
		printf("������ �ϱ⿹���� ����, ���� (A or P) : ");
		scanf("%c", &d.ampm);
		fflush(stdin);
		printf("������ �ϱ⿹���� ���� : ");
		gets(d.weath);
		fprintf(fp, "%d  %s  %c  %s\n", d.day, d.province, d.ampm, d.weath);
		printf("\n");
		i++;
	}
	fclose(fp);
	/*fp = fopen("D.txt", "r");
	printf("\n�ٽ� ���\n");
	for (int j = 0; j < i; j++){
		fscanf(fp, "%d  %s  %c  ", &d.day, d.province, &d.ampm);
		fgets(d.weath, 100, fp);
		printf("%d  %s  %c  %s\n", d.day, d.province, d.ampm, d.weath);
	}
	fclose(fp);*/
	system("cls");
	fp = fopen("D.txt", "r");
	printf("�˻��Ͻ� �ϱ⿹���� ��¥�� �Է��Ͻÿ� (�� : 20160114) : ");
	scanf("%d", &day);
	for (int j = 0; j < i; j++){
		fscanf(fp, "%d", &d.day);
		if (day == d.day){
			printf("��¥ : %d\n", d.day);
			fscanf(fp, "  %s  %c  ", d.province, &d.ampm);
			fgets(d.weath, 100, fp);
			printf("���� : %s\n", d.province);
			printf("���� or ���� : %c\n", d.ampm);
			printf("���� : %s\n", d.weath);
		}
		else
			fgets(garbage, 150, fp);
	}
	fclose(fp);
}