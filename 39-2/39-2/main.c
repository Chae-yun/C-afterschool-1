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

    printf("��ü �л����� �Է��ϼ��� : ");
    scanf("%d", &total_std_num);
    std = Initialize(total_std_num);
    if( std == NULL )
    {  printf("���� �޸� �Ҵ� ����\n");
        exit(1);   }

    while( 1 )
    {   menu = SelectMenu();
        if( menu == 0 )   break;
        switch( menu )
        { case 1:
            if( AddStudentInfo(std, total_std_num, &std_num) == 0 )
                  printf("�� �̻� �л� ������ �߰��� �� �����ϴ�.\n");
            else
                 printf("�л� ������ �߰��Ǿ����ϴ�.\n");           
            break;
        case 2:
            ListByAverage(std, std_num);
            break;
        case 3:
			printf("10�� 20�Ͽ� ������!!!");  break;
		case 4:
			printf("10�� 20�Ͽ� ������!!!");  break;
            break;
        }
    }
	free(std);
    std = NULL;
    return 0;
}