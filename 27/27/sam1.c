#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student{
	char name[20];
	int korean, english, math;
	double average;
};       //�����ݷ�!!! ����ü�� �ٸ� ������ Ÿ���� ������ ����

int main()
{
	struct student s1;       //����ü����
	struct student s2 = { "�ڳ���", 90, 78, 86 };     //����ü����
	s1.korean = 100;        //����ü �ʱ�ȭ~
	s1.english = 100;
	s1.math = 100;
	strcpy(s1.name, "����");
	s1.average = (double)(s1.korean + s1.english + s1.math) / 3;
	s2.average = (double)(s2.korean + s2.english + s2.math) / 3;     //~�������
	printf("%s : %5.2f\n", s1.name, s1.average);
	printf("%s : %5.2f\n", s2.name, s2.average);
}