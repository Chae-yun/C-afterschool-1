#include"Student.h"
#include <stdio.h>

STUDENT* Initialize(int num){
	STUDENT *p = malloc(sizeof(int)*num);
}
void AddStudentInfo(STUDENT *std, int totalCnt, int pCurCnt){
	if (totalCnt == pCurCnt)
		printf("\n���� á���ϴ�.\n");
	else{
		printf("�̸��� �Է��ϼ���:");
		scanf("%s", std[pCurCnt].name);
		fflush(stdin);
		printf("���� ������ �Է��ϼ���:");
		scanf("%d", &std[pCurCnt].kor);
		fflush(stdin);
		printf("���� ������ �Է��ϼ���:");
		scanf("%d", &std[pCurCnt].eng);
		fflush(stdin);
		printf("���� ������ �Է��ϼ���:");
		scanf("%d", &std[pCurCnt].math);
		fflush(stdin);
		printf("\n");
	}
}

void ListByAverage(STUDENT *std, int cnt){
	int i, j;
	int ch;
	char change[20] = "";
	for (i = 0; i < cnt; i++){
		for (j = i + 1; j < cnt; j++){
			if (std[i].ave < std[j].ave){
				strcpy(change, std[i].name);
				strcpy(std[i].name, std[j].name);
				strcpy(std[j].name, change);
				ch = std[i].kor;
				std[i].kor = std[j].kor;
				std[j].kor = ch;
				ch = std[i].math;
				std[i].math = std[j].math;
				std[j].math = ch;
				ch = std[i].eng;
				std[i].eng = std[j].eng;
				std[j].eng = ch;
				ch = std[i].ave;
				std[i].ave = std[j].ave;
				std[j].ave = ch;
			}
		}
	}
	PrintStdList(std, cnt);
}
void ListByName(STUDENT *std, int cnt){
	int i, j;
	char change[20]="";
	int ch;
	for (i = 0; i < cnt; i++){
		for (j = i+1; j < cnt; j++){
			if (std[i].name<std[j].name){
				strcpy(change, std[i].name);
				strcpy(std[i].name,std[j].name);
				strcpy(std[j].name, change);
				ch = std[i].kor;
				std[i].kor = std[j].kor;
				std[j].kor = ch;
				ch = std[i].math;
				std[i].math = std[j].math;
				std[j].math = ch;
				ch = std[i].eng;
				std[i].eng = std[j].eng;
				std[j].eng = ch;
				ch = std[i].ave;
				std[i].ave = std[j].ave;
				std[j].ave = ch;
			}
		}
	}
	PrintStdList(std, cnt);
}
void PrintStdList(STUDENT *std, int cnt){
	int i;
	for (i = 0; i < cnt; i++){
		printf("%s %d %d %d %lf\n", std[i].name, std[i].kor, std[i].eng, std[i].math, std[i].ave);
	}
}
void FindStudent(STUDENT *std, int *pCurCnt)
{
	char name[20];
	STUDENT *p = NULL;
	int findMenu = 0;

	printf("ã�� �л��� : ");
	scanf("%s", name);

	printf("%d\n", *pCurCnt);
	for (int i = 0; i < *pCurCnt; i++)
	{
		if (strcmp(std[i].name, name) == 0)
		{
			p = &std[i];
			break;
		}
	}
	if (p == NULL)
	{
		printf("�ش� �л� ������ ã�� �� �����ϴ�.\n");
		return;
	}
	printf("%-10s %3d %3d %3d %6.2f\n", p->name, p->kor, p->eng, p->math, p->ave);
}