#include<stdio.h>

enum day{ sun, mon, tue, wed, thu, fri, sat };
typedef enum day day;
char* day_name[] = { "��", "��", "ȭ", "��", "��", "��", "��" };

day tomorrow(day d){ //������ ����ã��
	return((day)(((int)d + 1) % 7)); //��Ȯ�ϰ� ������ �־�� �Ѵ�.
}

day yesterday(day d){ //������ ����ã��
	return((day)(((int)d + 6) % 7)); //��Ȯ�ϰ� ������ �־�� �Ѵ�.
}

int main()
{
	day today = sun; //������ �Ͽ���
	printf("������ %s����\n", day_name[yesterday(today)]);
	printf("������ %s����\n", day_name[today]);
	printf("������ %s����\n", day_name[tomorrow(today)]);
}