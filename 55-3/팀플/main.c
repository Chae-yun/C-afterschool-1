#include <stdio.h>
#include"Menu.h"
#include"Student.h"
#pragma warning(disable:4996)
#define MAX_STD 3

int main()
{
	STUDENT p[MAX_STD] = { NULL };
	int i, pCurCnt;
	int num = 1;
	char name[20];
	FILE *ofp;
	STUDENT* Initialize(p);
	while (num != 0){
		num = SelectMenu();
		switch (num){
		case 0: break;
		case 1:
			ofp = fopen("info.txt", "w");
			for (i = 0; i < MAX_STD; i++)
			{
				AddStudentInfo(p, MAX_STD, i);
				p[i].ave = ((double)p[i].kor + (double)p[i].eng + (double)p[i].math) / 3;
				fprintf(ofp, "%s %d %d %d %lf\n", p[i].name, p[i].kor, p[i].eng, p[i].math, p[i].ave);
			}
			pCurCnt = i;
			fclose(ofp);
			break;
		case 2:
			ofp = fopen("info.txt", "r");
			if (ofp == NULL){
				printf("출력파일 개방 실패\n");
				return 1;
			}
			printf("\n*****정보*****\n");
			for (i = 0; i < MAX_STD; i++){
				fscanf(ofp, "%s %d %d %d %lf\n", p[i].name, &p[i].kor, &p[i].eng, &p[i].math, &p[i].ave);
			}
			ListByAverage(p, MAX_STD);
			fclose(ofp);
			break;
		case 3:
			ofp = fopen("info.txt", "r");
			if (ofp == NULL){
				printf("출력파일 개방 실패\n");
				return 1;
			}
			printf("\n*****정보*****\n");
			for (i = 0; i < MAX_STD; i++){
				fscanf(ofp, "%s %d %d %d %lf\n", p[i].name, &p[i].kor, &p[i].eng, &p[i].math, &p[i].ave);
			}
			ListByName(p, MAX_STD);
			fclose(ofp);
			break;
		case 4:
			FindStudent(p, &pCurCnt);
		}
	}
}
