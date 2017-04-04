/*#include<stdio.h>
int main()
{
	char s1[20] = "String!";
	char s2[20] = { 'S', 't', 'r', 'i', 'n', 'g', '!', 0 }; //0 = '\0'
	char *s3 = "String!"; //포인터 선언
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", s3);
}*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20] = "String!";
	char s2[20] = { 'S', 't', 'r', 'i', 'n', 'g', '!', 0 }; //0 = '\0'
	char *s3 = "String!"; //포인터 선언
	printf("length = %d size = %d %s\n", strlen(s1), sizeof(s1), s1);
	printf("length = %d size = %d %s\n", strlen(s2), sizeof(s2), s2);
	printf("length = %d size = %d %s\n", strlen(s3), sizeof(s3), s3); //주소값은 무조건 4바이트??
}