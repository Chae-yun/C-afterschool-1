#include <stdio.h>
int main()
{
	int salary = 24000000, juchuk = 0, year = 0;
	do{
		juchuk += salary * 0.15 + juchuk * 0.05;
		year++;
		printf("%3d�� �Ǿ��� ���� ���� : %d      ", year, salary);
		printf("%3d�� �Ǿ��� ���� ����� : %9d\n", year, juchuk);
		salary += salary * 0.045;
		salary -= salary % 100;
	} while (juchuk <= 100000000);
	printf("�ɸ��� �ð��� %d���Դϴ�.\n", year);
}
