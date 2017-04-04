/* Student.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "Menu.h"
#pragma warning(disable:4996)

STUDENT* Initialize(int num)
{
    STUDENT *p = malloc(sizeof(STUDENT) * num);
    if( p != NULL )
        memset(p, 0, sizeof(STUDENT) * num);
    return p;
}

int AddStudentInfo(STUDENT *std, int totalCnt, int *pCurCnt)
{
    STUDENT *p = NULL;

    if( totalCnt == *pCurCnt )
        return 0;

    p = &std[*pCurCnt];
    printf("\n이름, 국어, 영어, 수학 점수를 입력 :\n");
    scanf("%s %d %d %d", p->name, &p->kor, &p->eng, &p->math);
    p->ave = (double)(p->kor + p->eng + p->math) / 3;

    (*pCurCnt)++;
    return *pCurCnt;
}

void ListByAverage(STUDENT *std, int cnt)
{
	int i, j, index, temp;

	for (i = 0; i < cnt - 1; i++)
	{
		index = i;
		for (j = i + 1; j < cnt; j++)
		{
			if (std[index].ave > std[j].ave)
				index = j;
		}
		temp = std[i].ave;
		std[i].ave = std[index].ave;
		std[index].ave = temp;
	}
   PrintStdList(std, cnt);
}



void PrintStdList(const STUDENT *std, int cnt)
{
    int i;
    double totalAverage = 0;

    printf("\n==============================\n");
    printf("   이름    국  영  수   평균\n");
    printf("==============================\n");
    for( i = 0 ; i < cnt ; i++ )
    {
        printf("%-10s %3d %3d %3d %6.2f\n", std[i].name, 
            std[i].kor, std[i].eng, std[i].math, std[i].ave);
        totalAverage += std[i].ave;
    }
    printf("==============================\n");
    printf("전체 평균 : %6.2f\n", totalAverage / cnt);
}

