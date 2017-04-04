/* Name: cusManager.c  ver 1.1
* Content: 고객 관련 업무 처리 함수들의 정의.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "cusInfo.h"
#include "dvdInfo.h"
#include "dvdInfoAccess.h"
#include "screenOut.h"

/* 함    수: void RegistDVD(void)
* 기    능: 새로운 DVD 등록.
* 반    환: void
*
*/
void RegistDVD(void)
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre;

	/* ID 입력 과정 */
	fputs("ISBN 입력 : ", stdout);
	gets(ISBN);

	if (IsRegistISBN(ISBN))
	{
		puts("해당 ISBN은 이미 있습니다. 다른 ISBN을 입력하십시오.\n\n");
		getchar();
		return;
	}
	fputs("타이틀 입력 : ", stdout);
	gets(title);

	fputs("장르 입력 : ", stdout);
	scanf("%d", &genre);

	if (!AddDVDInfo(ISBN, title, genre))
	{
		puts("정상적인 데이터 저장에 실패하였습니다.");
		getchar();
		return;
	}

	puts("등록이 완료되었습니다.");
	getchar();
}

/* 함    수: void SearchDVD(void)
* 기    능: ISBN을 통한 DVD 정보 검색
* 반    환: void
*
*/
void SearchDVDInfo(void)
{
	char ISBN[ISBN_LEN];
	dvdInfo * DVDPtr;

	/* 찾을 대상의 ID 입력 */
	fputs("찾는 ISBN 입력 : ", stdout);
	gets(ISBN);

	DVDPtr = GetDVDPtrByISBN(ISBN);
	if (DVDPtr == 0)
	{
		puts("존재하지 않는 ISBN입니다.");
		getchar();
		return;
	}

	ShowDVDInfo(DVDPtr);
}

void RentDVD(void){
	char ISBN[ISBN_LEN];
	char cusID[ID_LEN];
	unsigned int rentDay;
	fputs("대여할 DVD의 ISBN : ", stdout);
	gets(ISBN);
	if (GetDVDPtrByISBN(ISBN) == 0)
		printf("없는 DVD네요.");
	if (GetDVDRentState(ISBN) == RENTED)
		printf("이미 빌려간 DVD입니다. 다른 DVD를 선택하세요.\n\n");
	else{
		printf("대여 가능한 DVD입니다. 정보를 입력하세요.\n\n");
		fputs("대여자 ID 입력 : ", stdout);
		gets(cusID);
		if (GetCusPtrByID(cusID) == 0)
		{
			puts("존재하지 않는 ID입니다.");
			getchar();
			return;
		}
		fputs("대여 날짜 입력 : ", stdout);
		scanf("%d", &rentDay);
		SetDVDRented(ISBN, cusID, rentDay))
		{
			puts("정상적인 데이터 저장에 실패하였습니다.");
			getchar();
			return;
		}
		puts("등록이 완료되었습니다.");
		getchar();
	}
}
void ReturnDVD(void);
void ShowDVDRentAllCusInfo(void){
	char ISBN[ISBN_LEN];
	fputs("검색할 DVD의 ISBN : ", stdout);
	gets(ISBN);
	ShowCustomerInfo(GetCusPtrByID(GetDVDPtrByISBN(ISBN)->rentList->cusID));
}

/* end of file */