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
	printf("%d ���� �л� ������ �Է��ϼ���.\n", MAX_STUDENT);
	for (i = 0; i < MAX_STUDENT; i++){
		printf("�̸� : ");
		scanf("%s", std[i].name);
		printf("����, ����, ���� ���� : ");
		scanf("%d %d %d", &std[i].korean, &std[i].english, &std[i].math);
		std[i].average = (double)(std[i].korean + std[i].english + std[i].math) / 3;
		total_average += std[i].average;
	}
	total_average /= MAX_STUDENT;
	printf("\n�̸�   ���� ���� ����  ���\n");
	for (i = 0; i < MAX_STUDENT; i++){
		printf("%4s%5d%5d%5d%8.2lf\n", std[i].name, std[i].korean, std[i].english, std[i].math, std[i].average);
	}
	printf("��ü��� : %.2lf\n", total_average);
}