#include<stdio.h>
#include<math.h>
//#define PI 3.141592
int main()
{
	int i;
	double s = 0.0, r = 10.0;
#ifdef PI
	s = 2.*PI*r;
#else //PI�� �����Ƿ� �̰� ����
	s = 2.*3.14*r;
#endif
	printf("s = %f\n", s);
}