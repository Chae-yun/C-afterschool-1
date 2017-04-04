#include <stdio.h>
int main()
{
	float x = 3.14159f;
	long long y = 5468456965465215LL;
	//long double z = 98765431212.341E+1293L;
	printf("float : %f\n", x);
	printf("long long : %I64d\n", y); //형식지정자
	//printf("long double : %Le\n", z); //형식지정자
}