#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)
int main()
{
	char str[50];
	printf("����� �� ���ڿ��� �Է��Ͻÿ� : ");
	gets(str);
	str[0] = toupper(str[0]);
	for (int i = 0; i<strlen(str); i++){
		if (isspace(str[i]))
			str[i + 1] = toupper(str[i + 1]);
	}
	printf("���� �� ���ڿ� : %s\n", str);
}