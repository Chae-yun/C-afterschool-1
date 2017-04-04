
/* Name: game.c  ver 1.0
* Content: 게임 관련 함수 정의.
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include <time.h>
#include "common.h"
#include "game.h"

/* 함    수: int ChoiceOfCom(void).
* 기    능: 무작위 값을 반환.
* 반    환: 0~99의 범위에 있는 값을 반환.
*
*/
int ChoiceOfCom(void)
{
	int num;
	srand(time(NULL));
	num = rand() % 3 + 1;
	return num;
}

/* 함    수: int ChoiceOfMe(void).
* 기    능: 사용자의 선택을 입력받음.
* 반    환: 사용자 입력.
*
*/
int ChoiceOfMe(void)
{
	int choice;
	printf("가위이면 %d, 바위이면  %d, 보이면 %d : ", SCISSORS, ROCK, PAPER);
	scanf("%d", &choice);
	if (choice > 3 || choice < 1)
		return 0;
	return choice;
}

/* 함    수: void WhoIsWinner(int com, int you)
* 기    능: 승자를 가림.
* 반    환: void
*
*/
void WhoIsWinner(int com, int you)
{
	int whowho = you - com;
	switch (whowho){
	case 0:
		printf("비겼습니다.\n");
		break;
	case 1: case -2:
		printf("당신이 이겼습니다.\n");
		break;
	default :
		printf("컴퓨터가 이겼습니다.\n");
	}
}

/* end of file */