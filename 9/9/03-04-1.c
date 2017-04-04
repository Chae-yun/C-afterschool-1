#include <stdio.h>
int main()
{
	int x = 450, y = 341, temp;
	/*temp를 주지 않고 x=y;하면 x에 있던 값이 날라가 버리므로 temp 주기
	(팔이 한개만 있는 사람 둘이 물건을 주고받을 때)*/
	printf("교환 전 : x=%d, y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("교환 후 : x=%d, y=%d\n", x, y);
}