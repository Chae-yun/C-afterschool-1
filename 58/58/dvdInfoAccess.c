/* Name: cusInfoCAccess.c  ver 1.0
* Content: DVD 정보 등록 및 참조 함수들의 정의
* Implementation: YSW
*
* Last modified 2008/01/01
*/
#include "common.h"
#include "dvdInfo.h"

#define MAX_DVD  100

static dvdInfo * dvdList[MAX_DVD];
static int numOfDVD = 0;

/* 함    수: int AddDVDInfo(char * ISBN, char * title, int genre)
* 기    능: dvdInfo 할당 및 저장.
* 반    환: 성공 시 '등록된 정보의 수', 실패 시 0을 반환.
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
/* 함    수: dvdInfo * GetDVDPtrByISBN(char * ISBN);
* 기    능: 해당 ISBN의 정보를 담고 있는 변수의 포인터 반환
* 반    환: 등록 안된 ISBN의 경우 NULL 포인터 반환.
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
/* 함    수: int IsRegistISBN(char * ISBN);
* 기    능: 등록 된 ISBN 인지 확인.
* 반    환: 등록 되었으면 1, 아니면 0 반환.
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