#include <stdio.h>
int main()
{
	int a = 30, b = 7, namuge;
	namuge = a - (a / b)*b;
	printf("30을 7로 나눈 나머지는 %d입니다.\n", namuge);

}