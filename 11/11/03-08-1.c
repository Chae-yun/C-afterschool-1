#include <stdio.h>
int main()
{
	int x = 0, sum = 0;
loop: //레이블 설정
	x++; //x를 1증가
	sum += x;
	if (x < 100) //x가 100보다 작으면
		goto loop; //지정된 레이블(loop)이 있는 곳으로 이동
	printf("sum=%d\n", sum);
}