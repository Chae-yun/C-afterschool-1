#include <stdio.h>
int main()
{
	printf("%s : %d\n", "Red Devil", sizeof("Red Devil"));
	printf("%s : %d\n", "���� �Ǹ�", sizeof("���� �Ǹ�"));
	printf("%s : %d\n", "Korea", sizeof("Korea"));
	printf("%s : %d\n", "", sizeof("")); //�ΰ� ������ 1���� (�������鵵)
}