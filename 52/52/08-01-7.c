#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#define MAXSIZE 5
void push(int y);
void print();
int stack[MAXSIZE];
int pop();
int top;
#pragma warning(disable:4996)
int main()
{
	void push(int);
	void print();
	int pop();
	int will = '1', i, num;
	while (will != '0'){
		printf("  �� �޴� : \t\t1. PUSH\t\t2. POP\t\t0. ����\n�޴� ���� : ");
		will = getch();
		switch (will){
			case '0': 
				break;
			case '1': printf("PUSH�� ������ �Է� : ");
				scanf("%d", &num);
				push(num); break;
			case '2':
				i = pop();
				if (i != -999999)
					printf("\n......���ÿ��� Top�� �ִ� ������ ���� : %d", i);
				break;
			default:
				printf("�߸��� ����");
		}
		print();
		printf("\n");
	}
}
void push(int y){
	if (top >= MAXSIZE){
		printf("...STACK FULL : \n");
		return;
	}
	else{
		top++;
		stack[top] = y;
	}
}
int pop(){
	int a;
	if (top <= 0){
		printf("\n....STACK EMPTY : ");
		return -999999;
	}
	else{
		a = stack[top];
		top--;
	}
	return a;
}
void print(){
	int i, tmp;
	tmp = top;
	printf(" => ");
	for (; tmp > 0; tmp--)
		printf("%d ", stack[tmp]);
	printf("\n");
}