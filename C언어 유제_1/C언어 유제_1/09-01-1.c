#include <stdio.h>
#pragma warning(disable:4996)

struct student{
	char *name;
	int IDno;
	int grade;
	char *tel;
	char *email;
};

int main()
{
	struct student *s1;
	struct student *s2;
	struct student *s3;
	s1 = malloc(sizeof(struct student));
	s2 = malloc(sizeof(struct student));
	s3 = malloc(sizeof(struct student));
	s1->name = "김가가";
	s1->IDno = 1;
	s1->grade = 3;
	s1->tel = "010-1111-1111";
	s1->email = "gaga@naver.com";
	s2->name = "김나나";
	s2->IDno = 2;
	s2->grade = 2;
	s2->tel = "010-2222-2222";
	s2->email = "nana@naver.com";
	s3->name = "김다다";
	s3->IDno = 3;
	s3->grade = 1;
	s3->tel = "010-3333-3333";
	s3->email = "dada@naver.com";
	printf("%s %d번 %d학년 %s %s\n", s1->name, s1->IDno, s1->grade, s1->tel, s1->email);
	printf("%s %d번 %d학년 %s %s\n", s2->name, s2->IDno, s2->grade, s2->tel, s2->email);
	printf("%s %d번 %d학년 %s %s\n", s3->name, s3->IDno, s3->grade, s3->tel, s3->email);
}