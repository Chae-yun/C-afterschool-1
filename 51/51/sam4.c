#include <stdio.h>

void TestStatic()
{
	int num = 0;
	static int count = 0;
	printf("num = %d", ++num);
	printf("count = %d\n", ++count);
}
int main()
{
	TestStatic();
	TestStatic();
	TestStatic();
}