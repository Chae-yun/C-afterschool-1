#include<stdio.h>

void TestStatic(void)
{
	int num = 0; //auto변수
	static int count = 0; //static변수로 남아있음 (정적지역변수)
	printf("num = %d ", ++num);
	printf("count = %d\n",++count);
}

int main()
{
	TestStatic();
	TestStatic();
	TestStatic();
}