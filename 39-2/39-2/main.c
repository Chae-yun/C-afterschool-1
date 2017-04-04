/* Main.c */
#include <stdio.h>
#include <stdlib.h>
#include "Student.h"
#include "Menu.h"
#pragma warning(disable:4996)

int main(void)
{   STUDENT *std = NULL;
    int total_std_num = 0;
    int std_num = 0;
    int menu;

    printf("전체 학생수를 입력하세요 : ");
    scanf("%d", &total_std_num);
    std = Initialize(total_std_num);
    if( std == NULL )
    {  printf("동적 메모리 할당 실패\n");
        exit(1);   }

    while( 1 )
    {   menu = SelectMenu();
        if( menu == 0 )   break;
        switch( menu )
        { case 1:
            if( AddStudentInfo(std, total_std_num, &std_num) == 0 )
                  printf("더 이상 학생 정보를 추가할 수 없습니다.\n");
            else
                 printf("학생 정보가 추가되었습니다.\n");           
            break;
        case 2:
            ListByAverage(std, std_num);
            break;
        case 3:
			printf("10월 20일에 만나요!!!");  break;
		case 4:
			printf("10월 20일에 만나요!!!");  break;
            break;
        }
    }
	free(std);
    std = NULL;
    return 0;
}