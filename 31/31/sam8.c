#include<stdio.h>

void TestStatic(void)
{
	int num = 0; //auto����
	static int count = 0; //static������ �������� (������������)
	printf("num = %d ", ++num);
	printf("count = %d\n",++count);
}

int main()
{
	TestStatic();
	TestStatic();
	TestStatic();
}