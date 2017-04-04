#include<stdio.h>
#include "Menu.h"
#pragma warning(disable:4996)

int SelectMenu(void)
{
	int menu;
	while (1){
		printf("\n----------------------\n");
		printf("1. 학생 정보 추가\n");
		printf("2. 성적순 출력\n");
		printf("3. 이름순 출력\n");
		printf("4. 학생 정보검색\n");
		printf("0. 종료\n");
		printf("----------------------\n");
		printf("메뉴 선택 : ");
		if (scanf("%d", &menu) == 0){//아무것도 입력 안됨
			printf("잘못입력하셨습니다.\n");
			fflush(stdin);
			continue;
		}
		switch (menu){
			case 1: return 1;
			case 2: return 2;
			case 3: return 3;
			case 4: return 4;
			case 0: return 0;
			default:
				printf("잘못 입력하셨습니다.\n");
				continue;
		}
	}
}