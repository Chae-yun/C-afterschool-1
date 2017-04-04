#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char in_data[40] = "3928,4829394,98394,69394";
	char in_format[40] = "%d%*c%d%*c%d%*c%d";
	char out_format[50] = "%#010o, %#010o, %#010o, %#010o", out[80]; //%#X 는 앞에 표식??? %#10X 는 값 앖에 10칸 띄어쓰기 %#010X 는 10칸에 0넣기
	int a, b, c, d;
	sscanf(in_data, in_format, &a, &b, &c, &d);
	sprintf(out, out_format, a, b, c, d); //개나니
	puts(out); //여기는 왜 빼면 안나옴?
}