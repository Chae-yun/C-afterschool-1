#include <stdio.h>
//#include <math.h> 책에는 있지만 없어도 오류 XX
int main()
{
	//int i; 책에는 왜 있을까..?
	double s = 0.0, r = 10.0;
	#ifdef PI
		s = 2.*PI*r;
	#else
		s = 2.*3.14*r;
	#endif
	printf("s=%f\n", s);
}