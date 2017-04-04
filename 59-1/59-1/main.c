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
	
	if (com == SCISSORS)
		puts("▷ 컴퓨터의 선택은 가위. ");
	else if (com == ROCK)
		puts("▷ 컴퓨터의 선택은 바위. ");
	else
		puts("▷ 컴퓨터의 선택은 보. ");

	if (you == SCISSORS)
		puts("▷ 당신의 선택은 가위. ");
	else if (you == ROCK)
		puts("▷ 당신의 선택은 바위. ");
	else
		puts("▷ 당신의 선택은 보. ");

	puts("");
	return 0;
}