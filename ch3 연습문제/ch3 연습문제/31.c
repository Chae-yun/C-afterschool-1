#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int i = 1, num = 0;
loop:
	num += i * i;
	/*if (num > 2000){
		printf("2000�� ���� �� i�� ���� %d�̰� �׶��� ���� %d�̴�.\n", i, num);
	}
	else{
		i++;
		goto loop;
	}*/
	if (num < 2000){
		i++;
		goto loop;
	}
	printf("2000�� ���� �� i�� ���� %d�̰� �׶��� ���� %d�̴�.\n", i, num);
}