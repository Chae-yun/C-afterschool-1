/* Name: main.c  ver 1.0
* Content: ���� main �Լ�.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "game.h"

int main(void)
{
	int com;
	int you;

	puts("�١١١١١� ���! �١١١١١�");
	com = ChoiceOfCom();
	you = ChoiceOfMe();
	if (you == 0){
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		return;
	}
	puts("");

	puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ�");
	WhoIsWinner(com, you);
	
	if (com == SCISSORS)
		puts("�� ��ǻ���� ������ ����. ");
	else if (com == ROCK)
		puts("�� ��ǻ���� ������ ����. ");
	else
		puts("�� ��ǻ���� ������ ��. ");

	if (you == SCISSORS)
		puts("�� ����� ������ ����. ");
	else if (you == ROCK)
		puts("�� ����� ������ ����. ");
	else
		puts("�� ����� ������ ��. ");

	puts("");
	return 0;
}