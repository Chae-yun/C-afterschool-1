#include <stdio.h>
typedef struct student{
	char name[20];
	int korean, english, math;
	double average;
}STUDENT;

int main()
{
	double everage = 1;
	STUDENT s1 = { "����", 100, 100, 100, 0.0 };
	STUDENT s2 = { "�ڳ���", 90, 80, 88, 0.0 };
	STUDENT s3 = { "�̸���", 45, 32, 44, 0.0 };
	STUDENT* std[] = { &s1, &s2, &s3 };
	for (int i = 0; i < 3; i++){
		printf("%s ", std[i]->name);
		printf("%d ", std[i]->korean);
		printf("%d ", std[i]->english);
		printf("%d ", std[i]->math);
		everage = (std[i]->korean + std[i]->english + std[i]->math) / 3;
		printf("%lf ", std[i]->average);
		printf("\n");
	}
}