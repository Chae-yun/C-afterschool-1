#include<stdio.h>
#pragma warning(disable:4996)

struct profile{
	int age;
	double height;
	char *np;
};

struct student{
	struct profile pf;
	int  num;
	double grade;
};

int main()
{
	struct student s1;
	printf("���̸� �Է��ϼ��� : ");
	scanf("%d", &s1.pf.age);
	printf("Ű�� �Է��ϼ��� : ");
	scanf("%lf", &s1.pf.height);
	printf("�̸��� �Է��ϼ��� : ");
	s1.pf.np = malloc(20); //�����ͺ����� �Է¹������� malloc���� �ڸ� �Ҵ�ޱ�
	scanf("%s",s1.pf.np);
	s1.num = 5;
	s1.grade = 4.4;
	printf("�̸� : %s\n", s1.pf.np);
	printf("���� : %d\n", s1.pf.age);
	printf("Ű : %lf\n", s1.pf.height);
	printf("�й� : %d\n", s1.num);
	printf("���� : %.1lf\n", s1.grade);
	return 0;
}