#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char in1[40] = "110-033, ����� ���α� ȿ�ڵ�";
	char in2[40] = "441-390, ��⵵ ������ �Ǽ��� �Ǽ���";
	char out_format[30] = "�����ȣ : %s, �ּ� : %s", t1[30], t2[5], t3[30];
	char in_format[40] = "%[0123456789-]%[, ]%[^\0]",out[80];
	sscanf(in1,in_format, t1, t2, t3);
	sprintf(out, out_format, t1, t3);
	puts(out);
	sscanf(in2, in_format, t1, t2, t3);
	sprintf(out,out_format, t1, t3); //���ϳ��ϳ���
	puts(out);
}