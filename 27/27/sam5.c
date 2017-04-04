#include<stdio.h>

union data{
	unsigned long dword;
	unsigned char byte[4];
};

int main()
{
	union data d1;
	int i;
	printf("data ����ü�� ũ�� : %d\n", sizeof(union data));
	d1.dword = 0x12345678;
	printf("d1.dword = %08x\n", d1.dword);
	for (i = 0; i < 4; i++)
		printf("d1.byte[%d] = %02x\n", i, d1.byte[i]);
	/*cpu�� ���ڰ迭�̸� ��Ʋ ����� ������� ����������Ʈ����(78 56 34 12) ������
	����ζ�迭�̸� �� ����� ������� �ֻ�������Ʈ����(12 34 56 78) ���´�.*/
	return 0;
}