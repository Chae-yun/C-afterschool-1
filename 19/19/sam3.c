#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
double GetLength(int x, int y);
int GetArea(int x, int y);
int GetPerimeter(int x, int y);
int main(){
	int x, y;
	printf("�� ���� ��ǥ (x, y)�� �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);
	printf("������ (%d, %d)������ �Ÿ� = %lf\n", x, y, GetLength(x, y));
	printf("������ (%d, %d)�� �̷�� ���簢���� ���� = %d\n", x, y, GetArea(x, y));
	printf("������ (%d, %d)�� �̷�� ���簢���� �ѷ� = %d\n", x, y, GetPerimeter(x, y));
}
double GetLength(int x, int y){
	double num;
	num = sqrt(x*x + y*y);
	return num;
}
int GetArea(int x, int y){
	int num;
	num = x*y;
	return num;
}
int GetPerimeter(int x, int y){
	int num;
	num = 2 * (x + y);
	return num;
}

