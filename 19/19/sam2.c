#include<stdio.h>
void PrintCount(void);
void Increment(void);
void Decrement(void);
int count;
int main()
{
	//int count = 10; 10�� �־ ���������̱� ������ ����� 0 2 1 �� ���´�.
	PrintCount();
	Increment();
	Increment();
	PrintCount();
	Decrement();
	PrintCount();
	return 0;
}
void PrintCount(void){
	printf("count = %d\n", count);
}
void Increment(void){
	count++;
}
void Decrement(void){
	count--;
}
