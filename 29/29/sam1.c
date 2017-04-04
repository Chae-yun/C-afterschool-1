#include<stdio.h>
#include<string.h>
#include<windows.h> //cls
#pragma warning(disable:4996)

struct member{
	char name[20];
	char gender;
	int age;
	char level[20];
	int sno;
};

int main()
{
	struct member members[5] = { { "홍길동", 'M', 49, "사장", 101 }, 
												{ "이몽룡", 'M', 25, "사원", 102 }, 
												{ "임꺽정", 'M', 39, "부장", 103 },
												{ "유관순", 'F', 28, "과장", 104 }, 
												{ "김유신", 'M', 43, "이사", 105 } };
	int i;
	int choice, sno;
	char name[20];
	printf("1. 사번\n2. 이름\n");
	printf("어떤 방법으로 직원을 검색할지 선택하시오 : ");
	scanf("%d", &choice);
	system("cls");//선택하면 이전화면 깨끗하게 하고 새 화면으로
	//getch();//새 화면 넘어갈 때 아무키나 누르면 넘어가게
	if (choice == 1){
		printf("사원번호를 입력하시오 : ");
		scanf("%d", &sno);
		for (i = 0; i < 5; i++){
			if (members[i].sno == sno)
				printf("\n이름 : %s\n성별 : %c\n나이 : %d\n직위 : %s\n",
				members[i].name, members[i].gender, members[i].age, members[i].level);
		}
	}
	else if (choice == 2){
		printf("이름을 입력하시오 : ");
		scanf("%s", name);
		for (i = 0; i < 5; i++){
			if (strcmp(members[i].name, name) == 0)
				printf("\n사원번호 : %d\n성별 : %c\n나이 : %d\n직위 : %s\n",
				members[i].sno, members[i].gender, members[i].age, members[i].level);
		}
	}
}