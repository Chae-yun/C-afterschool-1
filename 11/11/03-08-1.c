#include <stdio.h>
int main()
{
	int x = 0, sum = 0;
loop: //���̺� ����
	x++; //x�� 1����
	sum += x;
	if (x < 100) //x�� 100���� ������
		goto loop; //������ ���̺�(loop)�� �ִ� ������ �̵�
	printf("sum=%d\n", sum);
}