/* Name: main.c  ver 1.0
* Content: 게임 main 함수.
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

	puts("☆☆☆☆☆☆ 대결! ☆☆☆☆☆☆");
	com = ChoiceOfCom();
	you = ChoiceOfMe();
	if (you == 0){
		printf("잘못 입력하셨습니다.\n");
		return;
	}
	puts("");

	puts("★★★★★★ 결과! ★★★★★★");
	WhoIsWinner(com, you);

	printf("▷ 컴퓨터의 선택은 %d \n", com);

	if (you == EVEN)
		puts("▷ 당신의 선택은 짝수. ");
	else
		puts("▷ 당신의 선택은 홀수. ");

	puts("");
	return 0;
}