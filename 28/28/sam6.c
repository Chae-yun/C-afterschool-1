#include<stdio.h>

struct student{
	int num;
	char name[20];
	int score[5];
	double avg;
};

typedef struct student APPLE; //struct student 대신에 APPLE을 써도 된다.(사용자 데이터 타입)
struct student Getavg(struct student);

int main()
{
	APPLE s1 = { 315, "홍길동", { 82, 93, 74, 90, 65 } }; //사용자 데이터 타입 사용 -> 간편
	s1 = Getavg(s1);
	//Getavg(s1) 이렇게 하면 XX
	printf("\n평균 : %.1lf\n", s1.avg);
}

struct student Getavg(struct student s1)
{
	int sum = 0;
	printf("학번 : %d\n", s1.num);
	printf("이름 : %s\n", s1.name);
	printf("점수 : ");
	for (int i = 0; i < 5; i++){
		printf("%d   ", s1.score[i]);
		sum += s1.score[i];
	}
	s1.avg = sum / 5.;
	return s1;
}