
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
	num = rand() % 100 + 1;
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
	printf("Ȧ���̸� %d, ¦���̸�  %d : ", ODD, EVEN);
	scanf("%d", &choice);
	if (choice > 2 || choice < 1)
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
	if ((com % 2) == (you % 2))
		printf("����� �̰���ϴ�!\n\n");
	else
		printf("��ǻ�Ͱ� �̰���ϴ�!\n\n");
}

/* end of file */