#include "common.h"
#include "gameMoney.h"

static int moneyCom;  // 컴퓨터 소유 머니
static int moneyYou;  // 게이머 소유 머니

static int gamblingTableMoney;

/* 함    수: void SetComMoney(int money)
* 기    능: 컴퓨터 머니 설정.
* 반    환: void.
*
*/
void SetComMoney(int money)
{
	moneyCom = money;
}

/* 함    수: int GetCurrentComMoney(void)
* 기    능: 컴퓨터 머니 잔액 반환.
* 반    환: int.
*
*/
int GetCurrentComMoney(void)
{
	return moneyCom;
}

/* 함    수: void SetYouMoney(int money)
* 기    능: 게이머 머니 설정.
* 반    환: void.
*
*/
void SetYouMoney(int money)
{
	moneyYou = money;
}

/* 함    수: int GetCurrentYouMoney(void)
* 기    능: 게이머 머니 잔액 반환.
* 반    환: int.
*
*/
int GetCurrentYouMoney(void)
{
	return moneyYou;
}

/* 함    수: void SetGamblingTableMoney(int money)
* 기    능: 판돈의 크기 지정.
* 반    환: void
*
*/
void SetGamblingTableMoney(int money)
{
	gamblingTableMoney = money;
}

/* 함    수: void ComWinMoneyAccount(void)
* 기    능: 컴퓨터 승리 시 머니 정산.
* 반    환: void
*
*/
void ComWinMoneyAccount(void)
{
	moneyCom += gamblingTableMoney;
	moneyYou -= gamblingTableMoney;
}

/* 함    수: void YouWinMoneyAccount(void)
* 기    능: 게이머 승리 시 머니 정산.
* 반    환: void
*
*/
void YouWinMoneyAccount(void)
{
	moneyYou += gamblingTableMoney;
	moneyCom -= gamblingTableMoney;
}

/* end of file */