#include <stdio.h>
#include <conio.h>
#pragma warning(disable:4996)
		int main()
	{
			int dan, y;
			dan = 2;
			while (dan < 10){
				printf("%8d��\n", dan);
				y = 1;
				while (y < 10){
					printf("%2d * %2d = %2d\n", dan, y, dan*y);
					y++;
				}
				printf("\n\n");
				getch(); //�ƹ�Ű�� ������ ���� �� ����, �����Ű�� 2���� ��µǰ� �ƹ�Ű�� ������ ���� ���� ���
				dan++;
			}
		}