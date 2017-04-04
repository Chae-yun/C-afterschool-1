#include <stdio.h>
#include <stdarg.h>
void printargs(int arg1, ...); //���� �μ��� ����ϴ� �Լ� ���� ����
int main()
{
	printf("s1 = ");
	printargs(1, 2, 3, 4, 5, -1);
	printf("s2 = ");
	printargs(100, 200, 300, -1);
}
void printargs(int arg1, ...) {
	va_list argptr;
	int i;
	va_start(argptr, arg1); //���� ���� ó�� ����
	for (i = arg1; i != -1; i = va_arg(argptr, int))
		printf("%d  ", i); //�ϳ��� ���� ���� ���
	va_end(argptr); //���� ���� ó�� ��
	printf("\n");
}