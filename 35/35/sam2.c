#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
	FILE *fp;
	int data;
	double tall;
	char strdata[20];

	fp = fopen("c.txt", "w");
	if (fp == NULL){
		printf("������� ���� ����.\n");
		return 1;
	}

	while (1){
		printf("�й��� �Է��Ͻÿ� : ");
		scanf("%d", &data);
		if (data < 0) break;
		fprintf(fp, "%d  ", data);

		printf("�̸��� �Է��Ͻÿ� : ");
		scanf("%s", strdata);
		fprintf(fp, "%s\n", strdata);

		printf("���̸� �Է��Ͻÿ� : ");
		scanf("%d", &data);
		fprintf(fp, "%d  ", data);

		printf("Ű�� �Է��Ͻÿ� : ");
		scanf("%lf", &tall);
		fflush(stdin);
		fprintf(fp, "%.2lf\n", tall);

		printf("�ּҸ� �Է��Ͻÿ� : ");
		gets(strdata);
		fprintf(fp, "%s\n\n", strdata);
	}
	fclose(fp);
}
