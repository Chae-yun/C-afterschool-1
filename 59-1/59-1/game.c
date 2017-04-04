
/* Name: game.c  ver 1.0
* Content: ���� ���� �Լ� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"

/* ��    ��: int ChoiceOfCom(void).
* ��    ��: ������ ���� ��ȯ.
* ��    ȯ: 0~99�� ������ �ִ� ���� ��ȯ.
*
*/
int ChoiceOfCom(void)
{
	int num;
	srand(time(NULL));
	num = rand() % 3 + 1;
	return num;
}

/* ��    ��: int ChoiceOfMe(void).
* ��    ��: ������� ������ �Է¹���.
* ��    ȯ: ����� �Է�.
*
*/
int ChoiceOfMe(void)
{
	int choice;
	printf("�����̸� %d, �����̸�  %d, ���̸� %d : ", SCISSORS, ROCK, PAPER);
	scanf("%d", &choice);
	if (choice > 3 || choice < 1)
		return 0;
	return choice;
}

/* ��    ��: void WhoIsWinner(int com, int you)
* ��    ��: ���ڸ� ����.
* ��    ȯ: void
*
*/
void WhoIsWinner(int com, int you)
{
	int whowho = you - com;
	switch (whowho){
	case 0:
		printf("�����ϴ�.\n");
		break;
	case 1: case -2:
		printf("����� �̰���ϴ�.\n");
		break;
	default :
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
	}
}

/* end of file */