#include<stdio.h>
#include<ctype.h>
#pragma warning(disable:4996)
int main()
{
	int i=0, alnum = 0, spacepunct = 0;
	char str[100];
	printf("����� �� ���ڿ��� �Է��Ͻÿ� : ");
	gets(str);
	for (i = 0; str[i]; i++){
		if (isalnum(str[i]))
			alnum++;
		if (isspace(str[i]) || ispunct(str[i]))
			spacepunct++;
	}
	/*while (str[i]){
		if (isalnum(str[i]))
			alnum++;
		if (isspace(str[i]) || ispunct(str[i]))
			spacepunct++;
		i++;
	}*/
	printf("�����ڴ� %d���̰�, ����Ǵ� ���ι��ڴ� %d�� �Դϴ�.\n", alnum, spacepunct);
}