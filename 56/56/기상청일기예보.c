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
		printf("저장할 일기예보의 날짜 (예 : 20160114) : ");
		res = scanf("%d", &d.day);
		if (res == EOF){
			printf("\n일기예보 저장을 종료합니다.\n\n");
			break;
		}
		printf("저장할 일기예보의 지역 : ");
		scanf("%s", d.province);
		fflush(stdin);
		printf("저장할 일기예보의 오전, 오후 (A or P) : ");
		scanf("%c", &d.ampm);
		fflush(stdin);
		printf("저장할 일기예보의 날씨 : ");
		gets(d.weath);
		fprintf(fp, "%d  %s  %c  %s\n", d.day, d.province, d.ampm, d.weath);
		printf("\n");
		i++;
	}
	fclose(fp);
	/*fp = fopen("D.txt", "r");
	printf("\n다시 출력\n");
	for (int j = 0; j < i; j++){
		fscanf(fp, "%d  %s  %c  ", &d.day, d.province, &d.ampm);
		fgets(d.weath, 100, fp);
		printf("%d  %s  %c  %s\n", d.day, d.province, d.ampm, d.weath);
	}
	fclose(fp);*/
	system("cls");
	fp = fopen("D.txt", "r");
	printf("검색하실 일기예보의 날짜를 입력하시오 (예 : 20160114) : ");
	scanf("%d", &day);
	for (int j = 0; j < i; j++){
		fscanf(fp, "%d", &d.day);
		if (day == d.day){
			printf("날짜 : %d\n", d.day);
			fscanf(fp, "  %s  %c  ", d.province, &d.ampm);
			fgets(d.weath, 100, fp);
			printf("지역 : %s\n", d.province);
			printf("오전 or 오후 : %c\n", d.ampm);
			printf("날씨 : %s\n", d.weath);
		}
		else
			fgets(garbage, 150, fp);
	}
	fclose(fp);
}