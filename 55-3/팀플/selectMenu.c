#include"Menu.h"
int SelectMenu(void){
	int num = 1;
	printf("-------------\n");
	printf("1.�л������߰�\n");
	printf("2.������ ���\n");
	printf("3.�̸��� ���\n");
	printf("4.�л� �����˻�\n");
	printf("0.����\n");
	printf("-------------\n");
	printf("�޴� ���� : ");
	scanf("%d", &num);
	return num;
}