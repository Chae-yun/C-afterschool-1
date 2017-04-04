/* Name: main.c  ver 1.0
* Content: DVD 대여 관리 프로그램 main
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#include "common.h"
#include "cusManager.h"
#include "dvdManager.h"
#include "screenOut.h"
#pragma warning(disable:4996)

enum{ CUS_REGIST = 1, CUS_SEARCH, DVD_REGIST, DVD_SEARCH, DVD_RENT, DVD_RETURN, DVD_RENTINFO, QUIT };

int main(void)
{
	int inputMenu = 0;

	while (1)
	{
		ShowMenu();
		scanf("%d", &inputMenu);
		fflush(stdin);

		switch (inputMenu)
		{
		case CUS_REGIST:
			RegistCustomer();
			break;

		case CUS_SEARCH:
			SearchCusInfo();
			break;

		case DVD_REGIST:
			RegistDVD();
			break;

		case DVD_SEARCH:
			SearchDVDInfo();
			break;

		case DVD_RENT:
			RentDVD();
			break;

		/*case DVD_RETURN:
			ReturnDVD();
			break;*/

		case DVD_RENTINFO:
			ShowDVDRentAllCusInfo();
			break;
		}
		if (inputMenu == QUIT)
		{
			puts("이용해 주셔서 고마워요~");
			break;
		}
	}

	return 0;
}

/* end of file */