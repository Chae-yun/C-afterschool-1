#include<stdio.h>
#pragma warning(disable:4996)

int main(int argc, char* argv[])
{
	char gender[10];
	unsigned int y, m, d, g;
	sscanf(argv[1], "%2d%2d%2d", &y, &m, &d);
	g = argv[1][7] - '0';
	if (g > 2)
		y += 2000;
	else
		y += 1900;
	if (g % 2)
		strcpy(gender, "����");
	else
		strcpy(gender, "����");
	printf("���� : %d�� %d�� %d�� ���� : %s\n", y, m, d, gender);
}