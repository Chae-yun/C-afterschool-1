#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int a, b, c;
	printf("�ﰢ���� ���� �� ���� �Է����ּ��� : ");
	scanf("%d %d %d", &a, &b, &c);

	if (a + b < c || b + c < a || c + a < b){
		printf("�ﰢ���� �ƴ�\n");
	}

	else if (a == b && b == c&&c == a){
		printf("���ﰢ��\n");
	}

	else if (a == b || b == c || c == a){
		printf("�̵ �ﰢ��\n");
	}

	else if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)){
		printf("���� �ﰢ��\n");
	}

	else{
		printf("�Ϲݻﰢ��\n");
	}
}