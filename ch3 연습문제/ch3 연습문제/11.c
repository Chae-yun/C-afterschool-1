#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num;
	double start, finish;
	printf("1. Kilometers -> Miles\n");
	printf("2. Kilometers -> Feet\n");
	printf("3. Miles -> Kilometers\n");
	printf("4. Miles -> Feet\n");
	printf("5. Feet -> Miles\n");
	printf("6. Feet -> Kilometers\n");
	printf("0. Quit\n");
	printf("��ȣ�� �����Ͻÿ� : ");
	scanf("%d", &num);
	switch (num){
		case 1: 
			printf("��ȯ�ϰ� ���� km�� �Է��Ͻÿ� : ");
			scanf("%lf", &start);
			finish = start*0.62137;
			printf("%lfkm�� %lfmiles�Դϴ�.\n", start, finish); break;
		case 2:
			printf("��ȯ�ϰ� ���� km�� �Է��Ͻÿ� : ");
			scanf("%lf", &start);
			finish = start*3280.8;
			printf("%lfkm�� %lffeet�Դϴ�.\n", start, finish); break;
		case 3:
			printf("��ȯ�ϰ� ���� miles�� �Է��Ͻÿ� : ");
			scanf("%lf", &start);
			finish = start*1.6093;
			printf("%lfmiles�� %lfkm�Դϴ�.\n", start, finish); break;
		case 4:
			printf("��ȯ�ϰ� ���� miles�� �Է��Ͻÿ� : ");
			scanf("%lf", &start);
			finish = start*5280;
			printf("%lfmiles�� %lffeet�Դϴ�.\n", start, finish); break;
		case 5:
			printf("��ȯ�ϰ� ���� feet�� �Է��Ͻÿ� : ");
			scanf("%lf", &start);
			finish = start*0.000304;
			printf("%lffeet�� %lfkm�Դϴ�.\n", start, finish); break;
		case 6:
			printf("��ȯ�ϰ� ���� feet�� �Է��Ͻÿ� : ");
			scanf("%lf", &start);
			finish = start*0.000189;
			printf("%lffeet�� %lfkm�Դϴ�.\n", start, finish); break;
	}
}