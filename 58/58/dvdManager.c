/* Name: cusManager.c  ver 1.1
* Content: �� ���� ���� ó�� �Լ����� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "cusInfo.h"
#include "dvdInfo.h"
#include "dvdInfoAccess.h"
#include "screenOut.h"

/* ��    ��: void RegistDVD(void)
* ��    ��: ���ο� DVD ���.
* ��    ȯ: void
*
*/
void RegistDVD(void)
{
	char ISBN[ISBN_LEN];
	char title[TITLE_LEN];
	int genre;

	/* ID �Է� ���� */
	fputs("ISBN �Է� : ", stdout);
	gets(ISBN);

	if (IsRegistISBN(ISBN))
	{
		puts("�ش� ISBN�� �̹� �ֽ��ϴ�. �ٸ� ISBN�� �Է��Ͻʽÿ�.\n\n");
		getchar();
		return;
	}
	fputs("Ÿ��Ʋ �Է� : ", stdout);
	gets(title);

	fputs("�帣 �Է� : ", stdout);
	scanf("%d", &genre);

	if (!AddDVDInfo(ISBN, title, genre))
	{
		puts("�������� ������ ���忡 �����Ͽ����ϴ�.");
		getchar();
		return;
	}

	puts("����� �Ϸ�Ǿ����ϴ�.");
	getchar();
}

/* ��    ��: void SearchDVD(void)
* ��    ��: ISBN�� ���� DVD ���� �˻�
* ��    ȯ: void
*
*/
void SearchDVDInfo(void)
{
	char ISBN[ISBN_LEN];
	dvdInfo * DVDPtr;

	/* ã�� ����� ID �Է� */
	fputs("ã�� ISBN �Է� : ", stdout);
	gets(ISBN);

	DVDPtr = GetDVDPtrByISBN(ISBN);
	if (DVDPtr == 0)
	{
		puts("�������� �ʴ� ISBN�Դϴ�.");
		getchar();
		return;
	}

	ShowDVDInfo(DVDPtr);
}

void RentDVD(void){
	char ISBN[ISBN_LEN];
	char cusID[ID_LEN];
	unsigned int rentDay;
	fputs("�뿩�� DVD�� ISBN : ", stdout);
	gets(ISBN);
	if (GetDVDPtrByISBN(ISBN) == 0)
		printf("���� DVD�׿�.");
	if (GetDVDRentState(ISBN) == RENTED)
		printf("�̹� ������ DVD�Դϴ�. �ٸ� DVD�� �����ϼ���.\n\n");
	else{
		printf("�뿩 ������ DVD�Դϴ�. ������ �Է��ϼ���.\n\n");
		fputs("�뿩�� ID �Է� : ", stdout);
		gets(cusID);
		if (GetCusPtrByID(cusID) == 0)
		{
			puts("�������� �ʴ� ID�Դϴ�.");
			getchar();
			return;
		}
		fputs("�뿩 ��¥ �Է� : ", stdout);
		scanf("%d", &rentDay);
		SetDVDRented(ISBN, cusID, rentDay))
		{
			puts("�������� ������ ���忡 �����Ͽ����ϴ�.");
			getchar();
			return;
		}
		puts("����� �Ϸ�Ǿ����ϴ�.");
		getchar();
	}
}
void ReturnDVD(void);
void ShowDVDRentAllCusInfo(void){
	char ISBN[ISBN_LEN];
	fputs("�˻��� DVD�� ISBN : ", stdout);
	gets(ISBN);
	ShowCustomerInfo(GetCusPtrByID(GetDVDPtrByISBN(ISBN)->rentList->cusID));
}

/* end of file */