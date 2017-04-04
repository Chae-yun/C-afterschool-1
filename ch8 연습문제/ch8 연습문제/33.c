#include <stdio.h>
int what_triangle(int, int, int);
int is_triangle(int, int, int);
int main()
{
	int x = 3, y = 4, z = 5;
	if (is_triangle(x, y, z))
		printf("%d\n", what_triangle(x, y, z));
	else
		printf("0\n");
}
int is_triangle(int x, int y, int z){
	if (x != 0 && y != 0 && z != 0){
		if (x + y > z && y + z > x && x + z > y)
			return 1;
	}
	return 0;
}
int what_triangle(int x, int y, int z){
	if (x == y && y == z)
		return 1;
	else if (x == y || y == z || x == z)
		return 2;
	else if (x * x + y * y == z * z || y * y + z * z == x * x || x * x + z * z == y * y)
		return 3;
	else
		return 4;
}
