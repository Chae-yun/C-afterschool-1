
/* Name: game.c  ver 1.0
* Content: ���� ���� �Լ� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"
#include "gameTimes.h"
#include "gameMoney.h"

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
	printf("%d) ����  %d) ����  %d) ��  %d) ���� : ", SCISSORS, ROCK, PAPER, EXIT);
	scanf("%d", &choice);
	if (choice > 4 || choice < 1)
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
	IncreGameTimes();
	switch (whowho){
	case 0:
		printf("�����ϴ�.\n");
		break;
	case 1: case -2:
		IncreYouWinTimes();
		printf("����� �̰���ϴ�.\n");
		YouWinMoneyAccount();
		break;
	default:
		printf("��ǻ�Ͱ� �̰���ϴ�.\n");
		ComWinMoneyAccount();
	}
}

void Show(int choice)
{
	if (choice == SCISSORS)
		puts("����.");
	else if (choice == ROCK)
		puts("����.");
	else
		puts("��.");
}

void Last()
{
	printf("\n�ڡڡڡڡ� �������! �ڡڡڡڡ�\n");
	printf("��ǻ�� : %d\n", GetCurrentComMoney());
	printf("��� : %d\n\n", GetCurrentYouMoney());
	printf("�·� : %d%%\n\n", GetPercenOfVictory());
	printf("�����մϴ�.\n");
}
/* end of file */