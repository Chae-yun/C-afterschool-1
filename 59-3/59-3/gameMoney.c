#include "common.h"
#include "gameMoney.h"

static int moneyCom;  // ��ǻ�� ���� �Ӵ�
static int moneyYou;  // ���̸� ���� �Ӵ�

static int gamblingTableMoney;

/* ��    ��: void SetComMoney(int money)
* ��    ��: ��ǻ�� �Ӵ� ����.
* ��    ȯ: void.
*
*/
void SetComMoney(int money)
{
	moneyCom = money;
}

/* ��    ��: int GetCurrentComMoney(void)
* ��    ��: ��ǻ�� �Ӵ� �ܾ� ��ȯ.
* ��    ȯ: int.
*
*/
int GetCurrentComMoney(void)
{
	return moneyCom;
}

/* ��    ��: void SetYouMoney(int money)
* ��    ��: ���̸� �Ӵ� ����.
* ��    ȯ: void.
*
*/
void SetYouMoney(int money)
{
	moneyYou = money;
}

/* ��    ��: int GetCurrentYouMoney(void)
* ��    ��: ���̸� �Ӵ� �ܾ� ��ȯ.
* ��    ȯ: int.
*
*/
int GetCurrentYouMoney(void)
{
	return moneyYou;
}

/* ��    ��: void SetGamblingTableMoney(int money)
* ��    ��: �ǵ��� ũ�� ����.
* ��    ȯ: void
*
*/
void SetGamblingTableMoney(int money)
{
	gamblingTableMoney = money;
}

/* ��    ��: void ComWinMoneyAccount(void)
* ��    ��: ��ǻ�� �¸� �� �Ӵ� ����.
* ��    ȯ: void
*
*/
void ComWinMoneyAccount(void)
{
	moneyCom += gamblingTableMoney;
	moneyYou -= gamblingTableMoney;
}

/* ��    ��: void YouWinMoneyAccount(void)
* ��    ��: ���̸� �¸� �� �Ӵ� ����.
* ��    ȯ: void
*
*/
void YouWinMoneyAccount(void)
{
	moneyYou += gamblingTableMoney;
	moneyCom -= gamblingTableMoney;
}

/* end of file */