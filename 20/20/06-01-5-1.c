#include<stdio.h>
int main() //��������
{
	int i, j, temp;
	int stud[10] = { 45, 92, 88, 34, 88, 95, 82, 59, 70, 76 };
	printf(" �� �� �� : ");
	for (i = 0; i < 10; i++){
		printf("%d ", stud[i]);
	}
	printf("\n");

	for (i = 0; i < 9; i++){ //for (i = 0; i < 10; i++)
		for (j = i+1; j < 10; j++){ //for (j = 0; j < 10; j++)�̶�� �ϸ� ū�� ���� ���´�.... ����
			if (stud[i] > stud[j]){ //ū�� ���� �ϰ� �ʹٸ� �ε�ȣ �ݴ��
				temp = stud[i];
				stud[i] = stud[j];
				stud[j] = temp;
			}//if
		}//for2
	}//for1

	printf("���� ��� : ");
	for (i = 0; i < 10; i++){
		printf("%d ", stud[i]);
	}//for3
	printf("\n");
}