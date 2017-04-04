#include"Menu.h"
int SelectMenu(void){
	int num = 1;
	printf("-------------\n");
	printf("1.학생정보추가\n");
	printf("2.성적순 출력\n");
	printf("3.이름순 출력\n");
	printf("4.학생 정보검색\n");
	printf("0.종료\n");
	printf("-------------\n");
	printf("메뉴 선택 : ");
	scanf("%d", &num);
	return num;
}