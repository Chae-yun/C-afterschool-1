#include <stdio.h>
#pragma warning(disable:4996)
void print_series(int);
int main()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	print_series(x);
}
void print_series(int x){
	if (x == 0)
		return;
	print_series(x - 1);
	printf("%d ", x);
}