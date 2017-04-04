#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct student{
	char name[20];
	int korean, english, math;
	double average;
};       //세미콜론!!! 구조체란 다른 데이터 타입의 구조를 연속

int main()
{
	struct student s1;       //구조체선언
	struct student s2 = { "박나나", 90, 78, 86 };     //구조체선언
	s1.korean = 100;        //구조체 초기화~
	s1.english = 100;
	s1.math = 100;
	strcpy(s1.name, "김모모");
	s1.average = (double)(s1.korean + s1.english + s1.math) / 3;
	s2.average = (double)(s2.korean + s2.english + s2.math) / 3;     //~여기까지
	printf("%s : %5.2f\n", s1.name, s1.average);
	printf("%s : %5.2f\n", s2.name, s2.average);
}