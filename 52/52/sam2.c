#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int count = 0;
	char character;
	while(1) {
		printf("���ڸ� �Է��Ͻÿ� (����� ctrl + z) : ");
		if (scanf("%c", &character) == EOF)
			break;
		fflush(stdin);
		count++;
	}
	printf("�� ���� ���� %d�Դϴ�.", count);
}