#include <stdio.h>
#pragma warning(disable:4996)
int find(char *str, char findchar, int length);
int main()
{
	char str[10], findchar;
	printf("��� ���ڿ� �Է� : ");
	gets(str);
	//str = malloc(strlen(str)+1);
	printf("���� �� ���� �Է� : ");
	scanf("%c", &findchar);
	printf("%c�� ���� : %d��\n", findchar, find(str, findchar, strlen(str)));
}
int find(char *str, char findchar, int length){
	int count = 0;
	for (int i = 0; i < length; i++){
		if (str[i] == findchar)
			count++;
	}
	return count;
}