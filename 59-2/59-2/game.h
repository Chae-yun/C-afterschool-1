/* Name: game.h  ver 1.0
* Content: ���� ���� �Լ� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#ifndef __GAME_H__
#define __GAME_H__

enum { SCISSORS = 1, ROCK, PAPER, EXIT };

int ChoiceOfCom(void);
int ChoiceOfMe(void);
void WhoIsWinner(int com, int you);

#endif
/* end of file */