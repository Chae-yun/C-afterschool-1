#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int choice;
	double tf, tc;
	printf("1 : ȭ�� -> ����\n");
	printf("2 : ���� -> ȭ��\n");
	scanf("%d", &choice);
	switch (choice*1){
	case 1:
		printf("ȭ���µ��� �Է��Ͻÿ� : ");
		scanf("%lf", &tf);
		tc = (tf - 32) * 5. / 9.;
		printf("ȭ���µ� %5.1lf�� �����µ� %5.1lf�Դϴ�.\n",tf,tc);
		break;
	case 2:
		printf("�����µ��� �Է��Ͻÿ� : ");
		scanf("%lf", &tc);
		tf = 9. / 5. * tc + 32;
		printf("�����µ� %lf�� ȭ���µ� %lf�Դϴ�.\n",tc,tf);
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
	}
}