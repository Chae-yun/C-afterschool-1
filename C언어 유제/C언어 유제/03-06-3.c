#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int year, month, day;
	printf("�� �� ���� �Է��Ͻÿ� : ");
	scanf("%d %d %d", &year, &month, &day);
	if (year%400 ==0 || year%100 != 0 && year%4==0){
		//leaf = 1; �̷��� ������ �Ʒ����� ������ ���� �ִ�. =>�÷��׺�Ʈ?����?  �ٵ� ���� �ȵʤ�
		if (month == 4 || month == 6 || month == 9 || month == 11){
			if (day == 30)
				printf("�������� %d�� %d�� 1��\n", year, month + 1);
			else if (day > 30)
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
			if (day == 31)
				printf("�������� %d�� %d�� 1��\n", year, month + 1); //���� 1�� �̰� �÷��� ����???? �ȵ����..��
			else if (day > 31)
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else if (month == 12){
			if (day >= 31)
				printf("�������� %d�� 1�� 1��\n", year + 1);
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else if (month == 2){
			if (day >= 29)
				printf("�������� %d�� %d�� 1��\n", year, month + 1);
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}

	else{
		if (month == 4 || month == 6 || month == 9 || month == 11){
			if (day == 30)
				printf("�������� %d�� %d�� 1��\n", year, month + 1);
			else if (day > 30)
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10){
			if (day == 31)
				printf("�������� %d�� %d�� 1��\n", year, month + 1);
			else if (day > 31)
				printf("�߸� �Է��ϼ̽��ϴ�.\n");
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else if (month == 12){
			if (day >= 31)
				printf("�������� %d�� 1�� 1��\n", year + 1);
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else if (month == 2){
			if (day >= 28)
				printf("�������� %d�� %d�� 1��\n", year, month + 1);
			else
				printf("�������� %d�� %d�� %d��\n", year, month, day + 1);
		}
		else
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
}
