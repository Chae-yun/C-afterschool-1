#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b = 1;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &a);
	printf("%d�� ��� = ", a);
loop:
	if (a%b == 0){
		printf("%d", b);
		printf(" ");
	}
	b++;
	if (b <= a)
		goto loop;
}