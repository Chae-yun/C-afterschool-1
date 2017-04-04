/* Name: dvdInfoAccess.h  ver 1.1
* Content: DVD ���� ����/���� �Լ����� ����.
* Implementation: YSW
*
* Last modified 2008/01/01
*/

#ifndef __DVDACCESS_H__
#define __DVDACCESS_H__

#include "dvdInfo.h"

int AddDVDInfo(char * ISBN, char * title, int genre);
dvdInfo * GetDVDPtrByISBN(char * ISBN);
int IsRegistISBN(char * ISBN);

/* �߰��� �Լ����� ���� */
int SetDVDRented(char * ISBN, char * cusID, int rentDay);
int SetDVDReturned(char * ISBN);
int GetDVDRentState(char * ISBN);

#endif
/* end of file */