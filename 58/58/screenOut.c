/* Name: screenOut.c  ver 1.0
* Content: �ܼ� ����� ���� �Լ����� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "screenOut.h"
#include "cusInfo.h"
#include "dvdInfo.h"

/* ���α׷� ����� ���� �޴� */
void ShowMenu(void)
{
	system("cls");   //stdlib.h

	printf("���������� ��  �� �������������� \n");
	printf(" 1. �ű԰��� \n");
	printf(" 2. ���˻� \n");
	printf("�������������������������������� \n");
	printf(" 3. DVD ��� \n");
	printf(" 4. DVD �˻� \n");
	printf("�������������������������������� \n");
	printf(" 5. DVD �뿩 \n");
	printf(" 6. DVD �ݳ� \n");
	printf("�������������������������������� \n");
	printf(" 7. DVD �뿩�� ��ü ��ȸ \n");
	printf(" 8. ���� \n");
	printf("�������������������������������� \n");
	printf("���á� ");
}


/* �� ������ �⺻ ���� ��� */
void ShowCustomerInfo(cusInfo * pCus)
{
	printf("���������������������������������� \n");
	printf("�� �� ID: %s \n", pCus->ID);
	printf("�� �� �̸�: %s \n", pCus->name);
	printf("�� �� ��ȭ��ȣ: %s \n", pCus->phoneNum);
	printf("���������������������������������� \n\n");

	getchar(); // Ű �Է½� �Ѿ�� ���ؼ�..
}

void ShowDVDInfo(dvdInfo * pDVD)
{
	printf("���������������������������������� \n");
	printf("�� �� ISBN: %s \n", pDVD->ISBN);
	printf("�� �� Ÿ��Ʋ: %s \n", pDVD->title);
	printf("�� �� �帣: "), ShowGenre(pDVD->genre), puts("");
	printf("���������������������������������� \n\n");

	getchar(); // Ű �Է½� �Ѿ�� ���ؼ�..
}

void ShowGenre(int gen){
	switch (gen){
	case ACTION:
		fputs("�׼�", stdout);
		break;
	case COMIC:
		fputs("�ڹ�", stdout);
		break;
	case SF:
		fputs("SF", stdout);
		break;
	case ROMANTIC:
		fputs("�θǽ�", stdout);
		break;
	}
}