#include <stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)
void change(char *arr);
int main()
{
	char a[10];
	printf("문자를 입력하시오 : ");
	scanf("%s", a);
	change(a);
	for (int i = 0; a[i] != NULL; i++)
		printf("%c", a[i]);
	printf("\n");
}
void change(char *arr){
	for (int i = 0; arr[i] != NULL; i++){
		if (arr[i] >= 'A' && arr[i] <= 'Z')
			arr[i] += 32;
		else if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;
		else;
		/*if (islower(arr[i]))
			toupper(arr[i]);
		else if (isupper(arr[i]))
			tolower(arr[i]);왜 안되징*/
	}
}