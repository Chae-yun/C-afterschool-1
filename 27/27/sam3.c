#include<stdio.h>
#define MAX_STUDENT 5
#pragma warning(disable:4996)

struct student{
	char name[20];
	int korean, english, math;
	double average;
};

int main()
{
	struct student std[MAX_STUDENT];
	int i;
	double total_average = 0;
	printf("%d 명의 학생 정보를 입력하세요.\n", MAX_STUDENT);
	for (i = 0; i < MAX_STUDENT; i++){
		printf("이름 : ");
		scanf("%s", std[i].name);
		printf("국어, 영어, 수학 점수 : ");
		scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);
		std[i].average = (double)(std[i].korean + std[i].english + std[i].math) / 3;
		total_average += std[i].average;
	}
	total_average /= MAX_STUDENT;
	printf("\n이름   국어 영어 수학  평균\n");
	for (i = 0; i < MAX_STUDENT; i++){
		printf("%4s%5d%5d%5d%8.2lf\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	}
	printf("전체평균 : %.2lf\n", total_average);
}