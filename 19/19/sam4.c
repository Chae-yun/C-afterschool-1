#include<stdio.h>
#pragma warning(disable:4996)
int IsDigit(char num);
int main(){
	char num;
	printf("문자를 하나 입력하시오 : ");
	scanf("%c", &num);
	if (IsDigit(num)){
		printf("숫자입니다.\n");
	}
	else{
		printf("숫자가 아닙니다.\n");
	}
}
int IsDigit(char num){
	if (num >= '0' && num <= '9'){
		return 1;
	}
	else{
		return 0;
	}
}