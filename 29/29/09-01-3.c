#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

struct member{
	char name[20];
	char gender;
	int age;
	char level[20];
};

int main()
{
	struct member members[5] = { { "홍길동", 'M', 49, "사장" }, { "이몽룡", 'M', 25, "사원" }, { "임꺽정", 'M', 39, "부장" },
	{ "유관순", 'F', 28, "과장" }, { "김유신", 'M', 43, "이사" } };
	int i;
	char name[20];
	for (i = 0; i < 5; i++){
		if (members[i].gender == 'M'&&members[i].age >= 40)
			printf("이름 : %s\n직위 : %s\n", members[i].name, members[i].level);
	}
	printf("\n");
	printf("검색할 직원 이름 입력 : ");
	scanf("%s", name);
	for (i = 0; i < 5; i++){
		if (strcmp(members[i].name, name) == 0)
			printf("이름 : %s\n직위 : %s\n나이 : %d\n", members[i].name, members[i].level, members[i].age);
	}
}