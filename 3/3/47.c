#include <stdio.h>
int main()
{
	char x = 'a';
	printf("%c, ", x - 32);  //32�� ASCII�ڵ忡�� 'a'�� 'A' ������ �Ÿ��̴�.
	printf("%c, ", x);
	printf("%c, ", 65);    //�빮�� A�� ASCII�ڵ� �� 65�̴�.
	printf("%d%c", x - 'A', '\n');
}