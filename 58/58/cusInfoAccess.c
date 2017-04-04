/* Name: cusInfoCAccess.c  ver 1.0
* Content: �� ���� ���� �� ���� �Լ����� ����
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include "common.h"
#include "cusInfo.h"

#define MAX_CUSTOMER  100

static cusInfo * cusList[MAX_CUSTOMER];
static int numOfCustomer = 0;

/* ��    ��: int AddCusInfo (char * ID, char * name, char * num)
* ��    ��: cusInfo �Ҵ� �� ����.
* ��    ȯ: ���� �� '��ϵ� ������ ��', ���� �� 0�� ��ȯ.
*
*/
int AddCusInfo(char * ID, char * name, char * num)
{
	/*	cusList[numOfCustomer]->ID = &ID;
	cusList[numOfCustomer]->name = &name;
	cusList[numOfCustomer]->phoneNum = &num;
	numOfCustomer++;
	*/
	cusInfo *pCus;
	if (numOfCustomer >= MAX_CUSTOMER)
		return 0;
	pCus = (cusInfo*)malloc(sizeof(cusInfo));
	strcpy(pCus->ID, ID);
	strcpy(pCus->name, name);
	strcpy(pCus->phoneNum, num);
	cusList[numOfCustomer++] = pCus;
	return numOfCustomer;
}
/* ��    ��: cusInfo * GetCusPtrByID(char * ID)
* ��    ��: �ش� ID�� ������ ��� �ִ� ������ ������ ��ȯ
* ��    ȯ: ��� �ȵ� ID�� ��� NULL ������ ��ȯ.
*
*/
cusInfo * GetCusPtrByID(char * ID)
{
	for (int i = 0; i < numOfCustomer; i++){
		if (!strcmp(cusList[i]->ID, ID))
			return cusList[i];
	}
	return 0;
}
/* ��    ��: int IsRegistID(char * ID)
* ��    ��: ���� �� ID���� Ȯ��.
* ��    ȯ: ���� �Ǿ����� 1, �ƴϸ� 0 ��ȯ.
*
*/
int IsRegistID(char * ID)
{
	cusInfo * pCus = GetCusPtrByID(ID);
	if (pCus == 0)
		return 0;
	else
		return 1;
}
/* end of file */