#include <stdio.h>
#include <math.h>
int main()
{
	double s = 0.0, r = 10.0;
	//#undef PI  있어도 없어도 똑같다. 중간에 define이 나오면 math 필요없다고???
	#define PI 3.141592
	s = 2.*PI*r;
	printf("s=%f\n", s);
}