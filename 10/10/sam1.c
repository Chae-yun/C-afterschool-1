#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int score, grade;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	if (score < 0 || score > 100)
	{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	else
	{
		if (score >= 90)
			grade = 'A';
		else if (score >= 80)
			grade = 'B';
		else if (score >= 70)
			grade = 'C';
		else if (score >= 60)
			grade = 'D';
		else
			grade = 'F';
		printf("%c �����Դϴ�.\n", grade);
	}
	return 0;
}