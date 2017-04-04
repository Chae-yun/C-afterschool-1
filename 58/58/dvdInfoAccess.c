/* Name: cusInfoCAccess.c  ver 1.0
* Content: DVD ���� ��� �� ���� �Լ����� ����
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include "common.h"
#include "dvdInfo.h"

#define MAX_DVD  100

static dvdInfo * dvdList[MAX_DVD];
static int numOfDVD = 0;

/* ��    ��: int AddDVDInfo(char * ISBN, char * title, int genre)
* ��    ��: dvdInfo �Ҵ� �� ����.
* ��    ȯ: ���� �� '��ϵ� ������ ��', ���� �� 0�� ��ȯ.
*
*/
int AddDVDInfo(char * ISBN, char * title, int genre)
{
	dvdInfo *pDVD;
	if (numOfDVD >= MAX_DVD)
		return 0;
	pDVD = (dvdInfo*)malloc(sizeof(dvdInfo));
	strcpy(pDVD->ISBN, ISBN);
	strcpy(pDVD->title, title);
	pDVD->genre = genre;
	dvdList[numOfDVD++] = pDVD;
	return numOfDVD;
}
/* ��    ��: dvdInfo * GetDVDPtrByISBN(char * ISBN);
* ��    ��: �ش� ISBN�� ������ ��� �ִ� ������ ������ ��ȯ
* ��    ȯ: ��� �ȵ� ISBN�� ��� NULL ������ ��ȯ.
*
*/
dvdInfo * GetDVDPtrByISBN(char * ISBN)
{
	for (int i = 0; i < numOfDVD; i++){
		if (!strcmp(dvdList[i]->ISBN, ISBN))
			return dvdList[i];
	}
	return 0;
}
/* ��    ��: int IsRegistISBN(char * ISBN);
* ��    ��: ��� �� ISBN ���� Ȯ��.
* ��    ȯ: ��� �Ǿ����� 1, �ƴϸ� 0 ��ȯ.
*
*/
int IsRegistISBN(char * ISBN)
{
	dvdInfo * pDVD = GetDVDPtrByISBN(ISBN);
	if (pDVD == 0)
		return 0;
	else
		return 1;
}

int SetDVDRented(char * ISBN, char * cusID, int rentDay)
{
	strcpy(GetDVDPtrByISBN(ISBN)->rentList->cusID, cusID);
	GetDVDPtrByISBN(ISBN)->rentList->rentDay = rentDay;
	GetDVDPtrByISBN(ISBN)->rentState = RENTED;
	return 1;
}
int SetDVDReturned(char * ISBN);
int GetDVDRentState(char * ISBN){
	return GetDVDPtrByISBN(ISBN)->rentState;
}

/* end of file */