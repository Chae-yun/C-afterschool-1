#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char in_data[20] = "50, 129";
	char out_data[80];
	char out_format[40] = "x�� ���� = %d, y�� ���� = %d\n";
	int x, y;
	sscanf(in_data, "%d%*c%d", &x, &y);
	sprintf(out_data, out_format, x, y);
	puts(out_data);
}