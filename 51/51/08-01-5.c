#include <stdio.h>
#include <math.h>
double triangle_area(int, int, int);
int is_triangle(int, int, int);
int main()
{
	int x = 1, y = 5, z = 5;
	if (is_triangle(x, y, z))
		printf("삼각형의 면적은 %lf입니다.\n", triangle_area(x, y, z));
	else
		printf("삼각형이 아닙니다.\n");
}
int is_triangle(int x, int y, int z){
	if (x != 0 && y != 0 && z != 0){
		if (x + y > z && y + z > x && x + z > y)
			return 1;
	}
	return 0;
}
double triangle_area(int x, int y, int z){
	double s, S;
	s = (x + y + z) / 2.;
	S = sqrt(s*(s - x)*(s - y)*(s - z));
	return S;
}
