#include <stdio.h>
#include <math.h>
int main()
{
	double s = 0.0, r = 10.0;
	//#undef PI  �־ ��� �Ȱ���. �߰��� define�� ������ math �ʿ���ٰ�???
	#define PI 3.141592
	s = 2.*PI*r;
	printf("s=%f\n", s);
}