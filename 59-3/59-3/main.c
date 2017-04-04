/* Name: main.c  ver 1.0
* Content: 게임 main 함수.
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
	printf("초기 소유 돈을 얼마로 지정하시겠습니까? : ");
	scanf("%d", &money);
	SetYouMoney(money);
	printf("판돈을 얼마로 지정하시겠습니까? : ");
	scanf("%d", &money);
	SetGamblingTableMoney(money);
	puts("");
	while (1){
		puts("☆☆☆☆☆☆ 대결! ☆☆☆☆☆☆");
		com = ChoiceOfCom();
		you = ChoiceOfMe();
		if (you == 0){
			printf("잘못 입력하셨습니다.\n");
			break;
		}
		else if (you == 4){
			Last();
			break;
		}

		puts("");

		puts("★★★★★★ 결과! ★★★★★★");
		WhoIsWinner(com, you);

		printf("▷ 컴퓨터의 선택은 ");
		Show(com);
		printf("▷ 당신의 선택은 ");
		Show(you);

		puts("");
		printf("컴퓨터 : %d\n", GetCurrentComMoney());
		printf("당신 : %d\n\n", GetCurrentYouMoney());
		printf("승률 : %d%%\n\n", GetPercenOfVictory());
		if (GetCurrentComMoney() == 0 || GetCurrentYouMoney() == 0){
			Last();
			break;
		}
	}
	return 0;
}