#include<stdio.h>
void PrintCount(void);
void Increment(void);
void Decrement(void);
int count;
int main()
{
	//int count = 10; 10을 주어도 지역변수이기 때문에 결과는 0 2 1 로 나온다.
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
