#include<stdio.h>
#include<ctype.h>
#include<string.h>
#pragma warning(disable:4996)
void upper_to_lower(char str[]);
void lower_to_upper(char str[]);
int main()
{
	char test[10] = "12AdCdEf";
	upper_to_lower(test);
	printf("%s\n", test);
	lower_to_upper(test);
	printf("%s\n", test);
	return 0;
}
void upper_to_lower(char str[])
{
	int i, length;
	length = strlen(str);
	for (i = 0; i < length; i++)
		str[i] = tolower(str[i]);
}
void lower_to_upper(char str[])
{
	int i, length;
	length = strlen(str);
	for (i = 0; i < length; i++)
		str[i] = toupper(str[i]);
}