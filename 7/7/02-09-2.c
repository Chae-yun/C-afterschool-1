#include <stdio.h>
int main()
{
	char character;
	printf("���ڸ� �Է��Ͻÿ� : ");
	character = getc(stdin);
	printf("�Էµ� ����=");
	putc(character, stdout);
	putc('\n',stdout); //printf("\n");�� ����.
}