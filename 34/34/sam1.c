#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

struct student{
	char name[20];
	int korean, english, math;
	double avera;
};

int main()
{
	struct student a[5];
	int i = 0;
	FILE *fp = NULL;
	fp = fopen("report.txt", "w");
	if (fp == NULL){
		printf("출력파일 개방 실패.\n");
		return 1;
	}
	while (1){
		printf("학생정보입력 : ");
		scanf("%s %d %d %d", a->name, &a->korean, &a->english, &a->math);
		i++;
		a->avera = (a->korean + a->english + a->math) / 3.;
		fprintf(fp, "%s   %4d %4d %4d %6.2lf\n", a->name, a->korean, a->english, a->math, a->avera);
		if (i == 5) break;
	}
	fclose(fp);
}
