#include<stdio.h>
#pragma warning(disable:4996)

struct customer{
	char name[20], sex[4], adress[30], tel[15];
	int age;
};

int main()
{
	int i;
	struct customer gogak[3];
	printf("3명의 고객 정보를 입력하세요.\n");
	for (i = 0; i < 3; i++){
		printf("이름 : ");
		gets(gogak[i].name);
		printf("나이 : ");
		scanf("%d", &gogak[i].age);
		printf("성별 (남 or 여) : ");
		fflush(stdin);
		gets(gogak[i].sex);
		printf("주소 : ");
		gets(gogak[i].adress);
		printf("전화번호 : ");
		gets(gogak[i].tel);
		printf("\n");
	}
	for (i = 0; i < 3; i++)
		printf("%s %d %s %s %s\n", gogak[i].name, gogak[i].age, gogak[i].sex, gogak[i].adress, gogak[i].tel);
}