/* Name: cusManager.c  ver 1.1
* Content: �� ���� ���� ó�� �Լ����� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "cusInfo.h"
#include "cusInfoAccess.h"
#include "screenOut.h"

/* ��    ��: void RegistCustomer(void)
* ��    ��: �ű� ȸ�� ����.
* ��    ȯ: void
*
*/
void RegistCustomer(void)
{
	char ID[ID_LEN];
	char name[NAME_LEN];
	char phoneNum[PHONE_LEN];

	/* ID �Է� ���� */
	fputs("ID �Է� : ", stdout);
	gets(ID);

	if (IsRegistID(ID))
	{
		puts("�ش� ID�� ��� �߿� �ֽ��ϴ�. �ٸ� ID�� ������ �ּ���");
		getchar();
		return;
	}
	fputs("�̸� �Է� : ", stdout);
	gets(name);

	fputs("��ȭ��ȣ �Է� : ", stdout);
	gets(phoneNum);

	if (!AddCusInfo(ID, name, phoneNum))
	{
		puts("�������� ������ ���忡 �����Ͽ����ϴ�.");
		getchar();
		return;
	}

	puts("������ �Ϸ�Ǿ����ϴ�.");
	getchar();
}

/* ��    ��: void SearchCusInfo(void)
* ��    ��: ID�� ���� ȸ�� ���� �˻�
* ��    ȯ: void
*
*/
void SearchCusInfo(void)
{
	char ID[ID_LEN];
	cusInfo * cusPtr;

	/* ã�� ����� ID �Է� */
	fputs("ã�� ID �Է�: ", stdout);
	gets(ID);

	cusPtr = GetCusPtrByID(ID);
	if (cusPtr == 0)
	{
		puts("�������� �ʴ� ID�Դϴ�.");
		getchar();
		return;
	}

	ShowCustomerInfo(cusPtr);
}

/* end of file */