#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i = 0;
	char str[100];
	printf("��ȯ�ϰ� ���� ���ڿ��� �Է��Ͻÿ� : ");
	gets(str);
	for (i = 0; str[i]; i++){
		if (islower(str[i]))
			str[i] = toupper(str[i]);
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	puts(str);
}