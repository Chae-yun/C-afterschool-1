#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char in_data[40] = "3928,4829394,98394,69394";
	char in_format[40] = "%d%*c%d%*c%d%*c%d";
	char out_format[50] = "%#010o, %#010o, %#010o, %#010o", out[80]; //%#X �� �տ� ǥ��??? %#10X �� �� �׿� 10ĭ ���� %#010X �� 10ĭ�� 0�ֱ�
	int a, b, c, d;
	sscanf(in_data, in_format, &a, &b, &c, &d);
	sprintf(out, out_format, a, b, c, d); //������
	puts(out); //����� �� ���� �ȳ���?
}