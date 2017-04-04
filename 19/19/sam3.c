#include<stdio.h>
#include<math.h>
#pragma warning(disable:4996)
double GetLength(int x, int y);
int GetArea(int x, int y);
int GetPerimeter(int x, int y);
int main(){
	int x, y;
	printf("한 점의 좌표 (x, y)를 입력하시오 : ");
	scanf("%d %d", &x, &y);
	printf("원점과 (%d, %d)사이의 거리 = %lf\n", x, y, GetLength(x, y));
	printf("원점과 (%d, %d)이 이루는 직사각형의 면적 = %d\n", x, y, GetArea(x, y));
	printf("원점과 (%d, %d)이 이루는 직사각형의 둘레 = %d\n", x, y, GetPerimeter(x, y));
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

