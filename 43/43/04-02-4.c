#include<stdio.h>
#include<math.h>
//#define PI 3.141592
int main()
{
	int i;
	double s = 0.0, r = 10.0;
#undef PI
#define PI 3.141592 //맨앞에서 선언하지 않아도 된다.
	s = 2.*PI*r;
	printf("s = %f\n", s);
}