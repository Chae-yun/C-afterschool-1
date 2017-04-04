#include <stdio.h>
#pragma warning(disable:4996)
int strLen(char *str);
void strCpy(char *str1, char *str2);
void strCat(char *str1, char *str3);
int main()
{
	char str1[10] = "IAMA", str2[10], str3[10] = "BOY";
	printf("<%s>의 길이 : %d\n", str1, strLen(str1));
	strCpy(str1, str2);
	printf("<%s>를 복사한 문자열 : %s\n", str1, str2);
	printf("<%s>에 <%s>를 붙인 문자열 : ", str1, str3);
	strCat(str1, str3);
	printf("%s\n", str1);
}
int strLen(char *str){
	int count = 0;
	for (int i = 0;; i++){
		if (str[i] == '\0')
			break;
		count++;
	}
	/*while((*str) != 0){
		count++;
		str++;
	}*/
	return count;
}
void strCpy(char *str1, char *str2){
	for (int i = 0; i < strLen(str1) + 1; i++){
		str2[i] = str1[i];
	}
}
void strCat(char *str1, char *str3){
	int j = 0;
	for (int i = strLen(str1); i < strLen(str1) + strLen(str3); i++){
		str1[i] = str3[j];
		j++;
	}
}