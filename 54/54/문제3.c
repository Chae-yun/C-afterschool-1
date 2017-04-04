#include <stdio.h>
#pragma warning(disable:4996)
int find(char *str, char findchar, int length);
int main()
{
	char str[10], findchar;
	printf("대상 문자열 입력 : ");
	gets(str);
	//str = malloc(strlen(str)+1);
	printf("세어 볼 문자 입력 : ");
	scanf("%c", &findchar);
	printf("%c의 개수 : %d개\n", findchar, find(str, findchar, strlen(str)));
}
int find(char *str, char findchar, int length){
	int count = 0;
	for (int i = 0; i < length; i++){
		if (str[i] == findchar)
			count++;
	}
	return count;
}