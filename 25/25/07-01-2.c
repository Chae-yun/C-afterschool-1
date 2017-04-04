#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *x;
	x = (int *)malloc(sizeof(int)); //동적으로 메모리를 할당하여 포인터를 x에 저장
	//sizeof(int)는 sizeof(4)와 같다.
	*x = 123; //포인터 변수에 값 저장
	printf("x가 가리키는 곳의 값 : %d\n", *x); // 포인터가 가리키는 곳의 값 출력
	free(x); //할당된 메모리를 OS에 반환한다.
}