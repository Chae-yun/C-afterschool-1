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
		printf("출력파일 개방 실패.\n");
		return 1;
	}

	while (1){
		printf("학번을 입력하시오 : ");
		scanf("%d", &data);
		if (data < 0) break;
		fprintf(fp, "%d  ", data);

		printf("이름을 입력하시오 : ");
		scanf("%s", strdata);
		fprintf(fp, "%s\n", strdata);

		printf("나이를 입력하시오 : ");
		scanf("%d", &data);
		fprintf(fp, "%d  ", data);

		printf("키를 입력하시오 : ");
		scanf("%lf", &tall);
		fflush(stdin);
		fprintf(fp, "%.2lf\n", tall);

		printf("주소를 입력하시오 : ");
		gets(strdata);
		fprintf(fp, "%s\n\n", strdata);
	}
	fclose(fp);
}
