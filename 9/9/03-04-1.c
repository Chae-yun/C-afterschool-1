#include <stdio.h>
int main()
{
	int x = 450, y = 341, temp;
	/*temp�� ���� �ʰ� x=y;�ϸ� x�� �ִ� ���� ���� �����Ƿ� temp �ֱ�
	(���� �Ѱ��� �ִ� ��� ���� ������ �ְ���� ��)*/
	printf("��ȯ �� : x=%d, y=%d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("��ȯ �� : x=%d, y=%d\n", x, y);
}