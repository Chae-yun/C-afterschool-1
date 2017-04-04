#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	char s1[256], s2[256];
	int result, i, len1, len2, max;
	char *p1, *p2;
	printf("첫 번째 문자열을 입력하세요 : ");
	scanf("%s", s1);
	p1 = s1;
	printf("두 번째 문자열을 입력하세요 : ");
	scanf("%s", s2);
	p2 = s2;
	result = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);
	max = len1 > len2 ? len1 : len2;
	for (i = 0; i < max; i++){
		result = (p2 + i) - (p1 + i);
		if (result != 0)
			break;
	}
	if (result>0)
		printf("%s가 %s보다 더 큰 문자열입니다.\n", s1, s2);
	else if (result < 0)
		printf("%s가 %s보다 더 큰 문자열입니다.\n", s2, s1);
	else
		printf("두 문자열이 같습니다.\n");
	return 0;
}