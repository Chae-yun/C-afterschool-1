#include<stdio.h>
#pragma warning(disable:4996)

struct student{
	int  num;
	char name[20];
	double grade;
};

int main()
{
	struct student s1 = { 315, "ȫ�浿", 2.4 }, s2 = { 247, "�̼���", 3.7 }, s3 = { 330, "�������", 4.4 };
	struct student max;
	max = s1;
	if (max.grade < s2.grade)
		max = s2;
	if (max.grade < s3.grade)
		max = s3;
	printf("�й� : %d\n", max.num);
	printf("�̸� : %s\n", max.name);
	printf("���� : %.1lf\n", max.grade);
}