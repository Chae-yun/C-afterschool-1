#include<stdio.h>
#include "Menu.h"
#pragma warning(disable:4996)

int SelectMenu(void)
{
	int menu;
	while (1){
		printf("\n----------------------\n");
		printf("1. �л� ���� �߰�\n");
		printf("2. ������ ���\n");
		printf("3. �̸��� ���\n");
		printf("4. �л� �����˻�\n");
		printf("0. ����\n");
		printf("----------------------\n");
		printf("�޴� ���� : ");
		if (scanf("%d", &menu) == 0){//�ƹ��͵� �Է� �ȵ�
			printf("�߸��Է��ϼ̽��ϴ�.\n");
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
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
				continue;
		}
	}
}