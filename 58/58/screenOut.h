/* Name: screenOut.h  ver 1.0
* Content: 콘솔 출력을 위한 함수들의 선언.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "cusInfo.h"
#include "dvdInfo.h"

void ShowMenu(void);
void ShowGenre(int);
void ShowCustomerInfo(cusInfo * pCus);
void ShowDVDInfo(dvdInfo * DVD);

#endif

/* end of file */