#include <stdio.h>
//#include <math.h> å���� ������ ��� ���� XX
int main()
{
	//int i; å���� �� ������..?
	double s = 0.0, r = 10.0;
	#ifdef PI
		s = 2.*PI*r;
	#else
		s = 2.*3.14*r;
	#endif
	printf("s=%f\n", s);
}