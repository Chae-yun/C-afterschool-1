#include<stdio.h>

struct student{
	int num;
	char name[20];
	int score[5];
	double avg;
};

typedef struct student APPLE; //struct student ��ſ� APPLE�� �ᵵ �ȴ�.(����� ������ Ÿ��)
struct student Getavg(struct student);

int main()
{
	APPLE s1 = { 315, "ȫ�浿", { 82, 93, 74, 90, 65 } }; //����� ������ Ÿ�� ��� -> ����
	s1 = Getavg(s1);
	//Getavg(s1) �̷��� �ϸ� XX
	printf("\n��� : %.1lf\n", s1.avg);
}

struct student Getavg(struct student s1)
{
	int sum = 0;
	printf("�й� : %d\n", s1.num);
	printf("�̸� : %s\n", s1.name);
	printf("���� : ");
	for (int i = 0; i < 5; i++){
		printf("%d   ", s1.score[i]);
		sum += s1.score[i];
	}
	s1.avg = sum / 5.;
	return s1;
}