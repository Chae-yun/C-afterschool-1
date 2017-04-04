/* Name: main.c  ver 1.0
* Content: ���� main �Լ�.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "game.h"
#include "gameTimes.h"
#include "gameMoney.h"

int main(void)
{
	int com;
	int you;
	int money;
	SetComMoney(1000);
	printf("�ʱ� ���� ���� �󸶷� �����Ͻðڽ��ϱ�? : ");
	scanf("%d", &money);
	SetYouMoney(money);
	printf("�ǵ��� �󸶷� �����Ͻðڽ��ϱ�? : ");
	scanf("%d", &money);
	SetGamblingTableMoney(money);
	puts("");
	while (1){
		puts("�١١١١١� ���! �١١١١١�");
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		if (you == 0){
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			break;
		}
		else if (you == 4){
			Last();
			break;
		}

		puts("");

		puts("�ڡڡڡڡڡ� ���! �ڡڡڡڡڡ�");
		WhoIsWinner(com, you);

		printf("�� ��ǻ���� ������ ");
		Show(com);
		printf("�� ����� ������ ");
		Show(you);

		puts("");
		printf("��ǻ�� : %d\n", GetCurrentComMoney());
		printf("��� : %d\n\n", GetCurrentYouMoney());
		printf("�·� : %d%%\n\n", GetPercenOfVictory());
		if (GetCurrentComMoney() == 0 || GetCurrentYouMoney() == 0){
			Last();
			break;
		}
	}
	return 0;
}